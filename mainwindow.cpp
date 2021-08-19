#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPortInfo>
#include <QGLWidget>
#include <QDebug>
#include <locale>
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
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_openserialBt_clicked()
{

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

//读取串口配置
void MainWindow::readSerialChange(void)
{
    this->vSerialCtr.vSerial.vSerialConfig->vSerialPortName = ui->serialCb->currentData().toInt();
    this->vSerialCtr.vSerial.vSerialConfig->vSerialBaudRate = ui->baudrateCb->currentData().toInt();
    this->vSerialCtr.vSerial.vSerialConfig->vSerialDataBits = QSerialPort::DataBits(ui->dataCb->currentData().toInt());
    this->vSerialCtr.vSerial.vSerialConfig->vSerialStopBits = QSerialPort::StopBits(ui->stopCb->currentData().toInt());
    this->vSerialCtr.vSerial.vSerialConfig->vSerialParrity  = QSerialPort::Parity(ui->checkoutCb->currentData().toInt());
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
            this->doWarning(QString::fromLocal8Bit("打开串口失败，请检查串口是否插入！"));
            this->SerialClose();
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

/*---------------------------提示窗口-------------------------------*/
/*错误*/
void MainWindow::doCritical(const QString &str)
{
    QMessageBox::critical(NULL,QString::fromLocal8Bit("错误"),str);
}
/*警告*/
void MainWindow::doWarning(const QString &str)
{
    QMessageBox::warning(this,QString::fromLocal8Bit("警告"),str);
}
/*帮助*/
void MainWindow::doHelp(void)
{
    QMessageBox::information(this,QString::fromLocal8Bit("帮助"),"");
}
/*关于*/
void MainWindow::doAbout(void)
{
    QMessageBox::about(this,QString::fromLocal8Bit("关于"),
                            QString::fromLocal8Bit("作者：fyt_duan\n"
                                                   "参考：SEASKY-刘威\n"));
}
