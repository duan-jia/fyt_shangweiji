#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPortInfo>
#include <QGLWidget>
#include <QDebug>
#include <locale>
#include <QMessageBox>
#include <QSpinBox>
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

    InitDetection();

    UpdateComInfo();
    //4.初始化串口设备更新支持
    UpdateSerial();
}

MainWindow::~MainWindow()
{
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
//3.串口设置内容初始化，波特率等
void MainWindow::UpdateComInfo(void)
{
    /*comboBoxCom1相关字符需要从设备读取*/

    /*comboBox配置波特率*/
    ui->baudrateCb->addItem("2000000",int(2000000));
    ui->baudrateCb->addItem("1382400",int(1382400));
    ui->baudrateCb->addItem("921600",int(921600));
    ui->baudrateCb->addItem("460800",int(460800));
    ui->baudrateCb->addItem("256000",int(256000));
    ui->baudrateCb->addItem("230400",int(230400));
    ui->baudrateCb->addItem("128000",int(128000));
    ui->baudrateCb->addItem("115200",int(115200));
    ui->baudrateCb->addItem("76800",int(76800));
    ui->baudrateCb->addItem("57600",int(57600));
    ui->baudrateCb->addItem("43000",int(43000));
    ui->baudrateCb->addItem("38400",int(38400));
    ui->baudrateCb->addItem("19200",int(19200));
    ui->baudrateCb->addItem("14400",int(14400));
    ui->baudrateCb->addItem("9600",int(9600));
    ui->baudrateCb->addItem("4800",int(4800));
    ui->baudrateCb->addItem("2400",int(2400));
    ui->baudrateCb->addItem("1200",int(1200));
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
    connect(ui->timeTxBt,&QCheckBox::released,[=]()
    {
        //更新vQObjectTxCtr的发送定时器时间
        vTxModeTimerCfg();
    });
    connect(ui->spinBox,&QSpinBox::editingFinished,[=]()
    {
        //更新vQObjectTxCtr的发送定时器时间
        vTxModeTimerCfg();
    });
    // 定时器发送启动控制
    connect(ui->txBt,
            &QPushButton::released,
            &this->vSerialCtr.vQObjectTxCtr,
            &vQObjectTx::vTxTimeOut
            ,Qt::QueuedConnection);
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
    if(ui->openserialBt->isEnabled() == 1)
    {
        //读取选择的串口配置
        readSerialChange();
        bool isOpen;
        emit vOpenSerial(isOpen);
        if(isOpen)
        {
            ui->openserialBt->setChecked(true);
        }
        else
        {
            //打开串口失败
//            this->doWarning(QString::fromUtf8("打开串口失败，请检查串口是否插入！"));
//            this->SerialClose();
            qDebug("fuck");
        }
    }
    else if(ui->openserialBt->isEnabled() == 0)
    {
        this->SerialClose();
    }
}
//关闭串口设备
void MainWindow::SerialClose(void)
{
    ui->openserialBt->setChecked(false);
    emit vCloseSerial();
}


/******一些临时加的*/
//发送的定时器控制
void MainWindow::vTxModeTimerCfg(void)
{
    this->vSerialCtr.vQObjectTxCtr.vTimerSet(ui->spinBox->value());
    if(!txModeCfg)
    {
        if(ui->timeTxBt->isChecked())
        {
            this->vSerialCtr.vQObjectTxCtr.vTimerStop();
            this->vSerialCtr.vQObjectTxCtr.vTimerStart();
        }
        else
        {
            this->vSerialCtr.vQObjectTxCtr.vTimerStop();
        }
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
