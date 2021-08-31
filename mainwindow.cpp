#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPortInfo>
#include <QGLWidget>
#include <QDebug>
#include <locale>
#include <QMessageBox>
#include <QSpinBox>
#include <QSettings>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList serialNamePort;

    serialPort = new QSerialPort(this);
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        serialNamePort<<info.portName();
    }
    ui->serialCb->addItems(serialNamePort);
    //0.初始化相关的地址
    DependenceAddr();

    InitDetection();

    UpdateComInfo();
    //4.初始化串口设备更新支持
    UpdateSerial();
    //5.加载信息发送配置
    InitSerialTx();

    ReadSettings();

    vUpdateShow();
}

MainWindow::~MainWindow()
{
    ui->plainTextRx->TimerStop();
    this->vSerialCtr.vSeaskyPortCtr.timerStop();
    this->vSerialCtr.vSeaskyPortCtr.vQTimerTxStop();
    this->vSerialCtr.vQObjectTxCtr.vTimerStop();
    delete ui;
}


void MainWindow::InitDetection(void)
{
    WindownInit();
    connect(ui->openserialBt, &QPushButton::released, this, &MainWindow::SerialOpen);

    connect(this, &MainWindow::vOpenSerial, &this->vSerialCtr.vSerial,
            &vSerialPort::vSerialOpen, Qt::BlockingQueuedConnection);
    connect(this, &MainWindow::vCloseSerial, &this->vSerialCtr.vSerial,
            &vSerialPort::vSerialClose, Qt::QueuedConnection);

    connect(&this->vSerialCtr.vSerial,&vSerialPort::vTxError,
            this,&MainWindow::vTxError);
}
void MainWindow::WindownInit(void)
{
    static const GUID GUID_DEVINTERFACE_LIST[] =
    {
    // GUID_DEVINTERFACE_USB_DEVICE
    {0xA5DCBF10, 0x6530, 0x11D2, { 0x90, 0x1F, 0x00, 0xC0, 0x4F, 0xB9, 0x51, 0xED } },
    };
    //注册插拔事件
    HDEVNOTIFY hDevNotify;
    DEV_BROADCAST_DEVICEINTERFACE NotifacationFiler;
    ZeroMemory(&NotifacationFiler,sizeof(DEV_BROADCAST_DEVICEINTERFACE));
    NotifacationFiler.dbcc_size = sizeof(DEV_BROADCAST_DEVICEINTERFACE);
    NotifacationFiler.dbcc_devicetype = DBT_DEVTYP_DEVICEINTERFACE;
    for(int i=0;i<sizeof(GUID_DEVINTERFACE_LIST)/sizeof(GUID);i++)
    {
        NotifacationFiler.dbcc_classguid = GUID_DEVINTERFACE_LIST[i];
        //GetCurrentUSBGUID();
        hDevNotify = RegisterDeviceNotification(HANDLE(this->winId()),&NotifacationFiler,DEVICE_NOTIFY_WINDOW_HANDLE);
        if(!hDevNotify)
        {
            GetLastError();
        }
    }
}
//0. 配置相关地址，应包含所有地址初始化操作
const qint32  SeaskyPortNum      = 24; //最大支持的FLOAT数据长度
bool    rxSeaskyHexEnable = false;       //16进制格式接收使能
const qint32  Utf8MaxLen         = 10+SeaskyPortNum*4;
float   vRxfloat[SeaskyPortNum];
uint8_t vRxUtf8[Utf8MaxLen];
float   vTxfloat[SeaskyPortNum];
uint8_t vTxUtf8[Utf8MaxLen];
void MainWindow::DependenceAddr(void)
{
    /*协议操作地址受此分配*/
    this->vSerialCtr.vSeaskyPortCtr.vProtocol.rx_info.utf8_data = &vRxUtf8[0];
    this->vSerialCtr.vSeaskyPortCtr.vProtocol.rx_info.data =     &vRxfloat[0];
    this->vSerialCtr.vSeaskyPortCtr.vProtocol.tx_info.utf8_data = &vTxUtf8[0];
    this->vSerialCtr.vSeaskyPortCtr.vProtocol.tx_info.data =     &vTxfloat[0];
    /*显示数据地址*/
    ui->plainTextRx->SetShowBuffAddr(&this->vSerialCtr.vSerial.vSerialData->RxBuff);
    //串口发送，hex格式共享，所有控件建议只读
    ui->plainTextTx->setHexEnableAddr(
                &this->vSerialCtr.vSerial.vSerialData->txHexEnable);
    //串口接收，hex格式共享，所有控件建议只读
    ui->plainTextRx->setHexEnableAddr(
                &this->vSerialCtr.vSerial.vSerialData->rxHexEnable);
    ui->plainTextRx->setHexEnableAddr(&rxSeaskyHexEnable);
    //设置发送相关地址
    this->vSerialCtr.vQObjectTxCtr.vTxAddrSet(&ui->plainTextTx->TextTxBuff);
}
//3.串口设置内容初始化，波特率等
void MainWindow::UpdateComInfo(void)
{
    /*comboBoxCom1相关字符需要从设备读取*/

    /*comboBox配置波特率*/
    ui->baudrateCb->addItem("115200",int(115200));
    ui->baudrateCb->addItem("9600",int(9600));
    ui->baudrateCb->addItem("4800",int(4800));
    ui->baudrateCb->addItem("2400",int(2400));
    //默认选择115200
    ui->baudrateCb->setCurrentText("115200");

    /*comboBox配置停止位*/
    ui->stopCb->addItem("1",QSerialPort::StopBits(QSerialPort::OneStop));
    ui->stopCb->addItem("1.5",QSerialPort::StopBits(QSerialPort::OneAndHalfStop));
    ui->stopCb->addItem("2",QSerialPort::StopBits(QSerialPort::TwoStop));

    /*comboBox配置数据位*/
    ui->dataCb->addItem("8",QSerialPort::DataBits(QSerialPort::Data8));
    ui->dataCb->addItem("7",QSerialPort::DataBits(QSerialPort::Data7));
    ui->dataCb->addItem("6",QSerialPort::DataBits(QSerialPort::Data6));
    ui->dataCb->addItem("5",QSerialPort::DataBits(QSerialPort::Data5));

    /*comboBox配置奇偶校验*/
    ui->checkoutCb->addItem(QString::fromUtf8("无"),QSerialPort::Parity(QSerialPort::NoParity));
    ui->checkoutCb->addItem(QString::fromUtf8("偶校验"),QSerialPort::Parity(QSerialPort::EvenParity));
    ui->checkoutCb->addItem(QString::fromUtf8("无奇校验"),QSerialPort::Parity(QSerialPort::OddParity));

};
//4.初始化串口设备更新支持
void MainWindow::UpdateSerial(void)
{
    bool haveIt = false;
    static qint16 index;//记录上次打开选中
    this->vSerialCtr.vSerial.vSerialComScanf();
    ui->serialCb->clear();
    haveIt = false;
    index  = 0;
    if(this->vSerialCtr.vSerial.vSerialPortCnt!=0)
    {
        for(qint16 i=0;i<this->vSerialCtr.vSerial.vSerialPortCnt;i++)
        {
            QString str ="("
                    +this->vSerialCtr.vSerial.vSerialComInfo[i].SerialName
                    +")"
                    +this->vSerialCtr.vSerial.vSerialComInfo[i].DescribeStr;
            ui->serialCb->addItem(str,
                this->vSerialCtr.vSerial.vSerialComInfo[i].SerialName);

            if(this->vSerialCtr.vSerial.vSerialComInfo[i].SerialName ==
               this->vSerialCtr.vSerial.vSerialConfig->vSerialPortName)
            {
                haveIt = true;
                index = i;
            }
        }
        //检测上次打开的串口是否存在
        if(haveIt != false)
        {
            ui->serialCb->setCurrentIndex(index);
        }
        else
        {
            //如果之前串口为打开状态，在串口拔出时，串口应变为关闭，因此按钮需要同步
            this->SerialClose();
            this->vSerialCtr.vSerial.vSerialConfig->vSerialPortName =
                    ui->serialCb->currentData().toString();
        }
    }
    else
    {
        this->SerialClose();
        ui->serialCb->clear();
        this->vSerialCtr.vSerial.vSerialConfig->vSerialPortName =" ";
    }
};
//5.加载信息发送配置
const qint32  SerialTxTimerCfg   = 100;//默认串口发送周期，可以通过spinBox调整
void MainWindow::InitSerialTx(void)
{
    //首次使用，配置默认时间
    this->vSerialCtr.vQObjectTxCtr.vTimerSet(SerialTxTimerCfg);
    ui->spinBox->setValue(SerialTxTimerCfg);
    //发送的模式控制
    /*协议定时发送相关*/
    connect(ui->timeTxCb,&QCheckBox::released,[=]()
    {
        //更新vQObjectTxCtr的发送定时器时间
        vTxModeTimerCfg();
    });
    connect(ui->spinBox,&QSpinBox::editingFinished,[=]()
    {
        //更新vQObjectTxCtr的发送定时器时间
        vTxModeTimerCfg();
    });
    //发送hex模式切换
    connect(this,
            &MainWindow::txHexEnableChanged,
            ui->plainTextTx,
            &vQTextEdit::hexEnableChanged);
    //发送窗口hex格式改变
    connect(ui->txHexCb,&QCheckBox::released,
            this,&MainWindow::vTxHexEnableCfg);
    // 定时器发送启动控制
    connect(ui->txBt,
            &QPushButton::released,
            &this->vSerialCtr.vQObjectTxCtr,
            &vQObjectTx::vTxTimeOut
            ,Qt::QueuedConnection);
    //根据选择内容清空对应发送数据
    connect(ui->txClearBt,&QPushButton::released,[=]()
    {
        ui->plainTextTx->TextTxBuff.clear();
        //更新显示
        emit txHexEnableChanged();
    });
}
//6.加载信息接收配置
void MainWindow::InitSerialRx(void)
{
//    //接收消息，清空处理
//    connect(ui->pushButtonRx2,&QPushButton::released,
//            ui->plainTextRx,&vPlainTextEdit::clearBuff);
//    //切换数据接收函数
//    connect(ui->pushButton_4,&QPushButton::released,
//            this,&MainWindow::vRxSlotChanged);
//    //刷新窗口控制
//    connect(this,&MainWindow::plaintextEditShowOne,
//            ui->plainTextRx,
//            &vPlainTextEdit::hexEnableChanged);
//    //如果遇到hex切换操作，刷新一次窗口
//    connect(ui->checkBoxRx1,&QCheckBox::released,
//            this,&MainWindow::vRxHexEnableCfg);
//    //是否是使能了串口接收加入时间戳
//    connect(ui->checkBoxRx2,&QCheckBox::released,
//            this,&MainWindow::vRxTimerStampChanged);
}
//读取串口配置
void MainWindow::readSerialChange(void)
{
    this->vSerialCtr.vSerial.vSerialConfig->vSerialPortName = ui->serialCb->currentData().toString();
    this->vSerialCtr.vSerial.vSerialConfig->vSerialBaudRate = ui->baudrateCb->currentData().toInt();
    this->vSerialCtr.vSerial.vSerialConfig->vSerialDataBits = QSerialPort::DataBits(ui->dataCb->currentData().toInt());
    this->vSerialCtr.vSerial.vSerialConfig->vSerialStopBits = QSerialPort::StopBits(ui->stopCb->currentData().toInt());
    this->vSerialCtr.vSerial.vSerialConfig->vSerialParrity  = QSerialPort::Parity(ui->checkoutCb->currentData().toInt());
    this->vSerialCtr.vSerial.vSerialConfig->vSerialFlowControl = QSerialPort::NoFlowControl;//没用到，默认无
}
//打开串口设备
void MainWindow::SerialOpen(void)
{
    if(ui->openserialBt->isChecked())
    {
        //读取选择的串口配置
        readSerialChange();
        bool isOpen = 0;
        emit vOpenSerial(isOpen);
        if(isOpen)
        {
            ui->openserialBt->setChecked(true);
            ui->openserialBt->setText("关闭串口");
        }
        else
        {
            //打开串口失败
            this->doWarning(QString::fromUtf8("打开串口失败，请检查串口是否插入！"));
            this->SerialClose();
        }
    }
    else
    {
        this->SerialClose();
    }
}
//关闭串口设备
void MainWindow::SerialClose(void)
{
    ui->openserialBt->setChecked(false);
    ui->openserialBt->setText("打开串口");
    emit vCloseSerial();
}
/*---------------------------界面恢复保存函数-------------------------------*/
//启动时读取设置
const QString ModulePath = "/Config/ModulePath";
const QString CfgPath    = "/Config";
void MainWindow::ReadSettings(void)
{
    //获取配置路径
    QString path = qApp->applicationDirPath()+
            CfgPath+"/"+"config.ini";
    QSettings settings(path, QSettings::IniFormat);
    settings.beginGroup("Configuration");
    //串口配置
    ui->serialCb->setCurrentIndex(settings.value("PortName",QVariant(7)).toInt());
    ui->baudrateCb->setCurrentIndex(settings.value("BaudRate",QVariant(0)).toInt());
    ui->stopCb->setCurrentIndex(settings.value("StopBits",QVariant(0)).toInt());
    ui->dataCb->setCurrentIndex(settings.value("DataBits",QVariant(0)).toInt());
    ui->checkoutCb->setCurrentIndex(settings.value("Checkout",QVariant(0)).toInt());
    //发送窗口的数据
    ui->spinBox->setValue(settings.value("TxTimerCnt",1).toInt());
    ui->txHexCb->setChecked(settings.value("txHexCb",false).toBool());
    ui->timeTxCb->setChecked(settings.value("timeTxCb",false).toBool());
    ui->plainTextTx->TextTxBuff=settings.value("TxPlainText","").toByteArray();
}
//关闭时保存设置
void MainWindow::WriteSettings(void)
{
    QString path = qApp->applicationDirPath()+
            CfgPath+"/"+"config.ini";
    QSettings settings(path, QSettings::IniFormat);
    settings.beginGroup("Configuration");
    settings.setValue("size",size());
    settings.setValue("pos",pos());
    //串口配置
    settings.setValue("PortName",ui->serialCb->currentIndex());
    settings.setValue("BaudRate",ui->baudrateCb->currentIndex());
    settings.setValue("StopBits",ui->stopCb->currentIndex());
    settings.setValue("DataBits",ui->dataCb->currentIndex());
    settings.setValue("Checkout",ui->checkoutCb->currentIndex());
    //发送窗口的数据
    settings.setValue("TxPlainText",ui->plainTextTx->TextTxBuff);
    settings.setValue("timeTxCb",ui->timeTxCb->isChecked());
    settings.setValue("txHexCb", ui->txHexCb->isChecked());
    settings.setValue("TxTimerCnt",ui->spinBox->value());

    settings.endGroup();
}
//退出事件->读取存储配置
void MainWindow::closeEvent(QCloseEvent *event)
{
    WriteSettings();
    event->accept();
}

/*---------------------------刷新-------------------------------*/
//同步窗口和变量数据
void MainWindow::vUpdateShow(void)
{
    //以下函数根据参数变化更新显示
//    vRxSlotChanged();        //刷新接收槽函数连接
    vTxSlotChanged();        //刷新发送槽函数连接
//    vRxTimerStampChanged();  //刷新接收时间戳使能
//    showRxHead();            //刷新协议RX显示
//    showTxHead();            //刷新协议TX显示
//    vPortShow();             //刷新协议显示
//    vRxHexEnableCfg();       //刷新RxHexEnable
    vTxHexEnableCfg();       //刷新TxHexEnable
//    vTxModeCfg();            //发送模式切换处理
//    vTxStampCfg();           //发送换行符控制
    vTxModeTimerCfg();       //发送的定时器控制
}
//刷新TxHexEnable
void MainWindow::vTxHexEnableCfg(void)
{
    if(ui->txHexCb->isChecked())
    {
        this->vSerialCtr.vSerial.vSerialData->txHexEnable = true;
    }
    else
    {
        this->vSerialCtr.vSerial.vSerialData->txHexEnable = false;
    }
    emit txHexEnableChanged();
}
//发送的定时器控制
void MainWindow::vTxModeTimerCfg(void)
{
    this->vSerialCtr.vQObjectTxCtr.vTimerSet(ui->spinBox->value());

    if(ui->timeTxCb->isChecked())
    {
        this->vSerialCtr.vQObjectTxCtr.vTimerStop();
        this->vSerialCtr.vQObjectTxCtr.vTimerStart();
    }
    else
    {
        this->vSerialCtr.vQObjectTxCtr.vTimerStop();
    }

}
//根据配置更新槽函数,以及更新显示
void MainWindow::vTxSlotChanged(void)
{
    if(txModeCfg)
    {
        //设置vQObjectTxCtr的发送定时器无法启动
        this->vSerialCtr.vQObjectTxCtr.vTimerStop();
        ui->timeTxCb->setChecked(false);
        ui->timeTxCb->setEnabled(false);
        //先断开所有，避免重复套用了链接
        this->vSerialCtr.vQObjectTxCtr.vDisConnectTx();
        this->vSerialCtr.vSeaskyPortCtr.vDisConnectTx();
        this->vSerialCtr.vSeaskyPortCtr.vConnectTx();
    }
    else
    {
        this->vSerialCtr.vQObjectTxCtr.vDisConnectTx();
        this->vSerialCtr.vSeaskyPortCtr.vDisConnectTx();
        this->vSerialCtr.vQObjectTxCtr.vConnectTx();
        //恢复vQObjectTxCtr的发送定时器权力
        ui->timeTxCb->setEnabled(true);
    }
}
/*---------------------------提示窗口-------------------------------*/
/*错误*/
void MainWindow::doCritical(const QString &str)
{
    QMessageBox::critical(NULL,QString::fromUtf8("错误"),str);
}
/*警告*/
void MainWindow::doWarning(const QString &str)
{
    QMessageBox::warning(this,QString::fromUtf8("警告"),str);
}
/*帮助*/
void MainWindow::doHelp(void)
{
    QMessageBox::information(this,QString::fromUtf8("帮助"),"");
}
/*关于*/
void MainWindow::doAbout(void)
{
    QMessageBox::about(this,QString::fromUtf8("关于"),
                            QString::fromUtf8("作者：fyt_duan\n"
                                                   "参考：SEASKY-刘威\n"));
}
