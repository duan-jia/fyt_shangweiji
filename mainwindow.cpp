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
//    connect(ui->openserialBt, &QPushButton::released, this, &MainWindow::SerialOpen;

//    connect(this, &MainWindow::vOpenSerial, &this->v)
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
