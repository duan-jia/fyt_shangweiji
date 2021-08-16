#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPortInfo>

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
    QSerialPort::BaudRate baudRate;
    QSerialPort::DataBits dataBits;
    QSerialPort::StopBits stopBits;
    QSerialPort::Parity checkoutBits;
}
