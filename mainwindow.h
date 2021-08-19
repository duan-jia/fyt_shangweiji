#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vserialcom.h>
#include <QMainWindow>
#include<QSerialPort>
#include<windows.h>
#include<dbt.h>
#include<QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSerialPort *serialPort;

    vSerialCom    vSerialCtr;

    /*-------------函数接口-------------------*/
    void InitDetection(void);
    void WindownInit(void);
    /*-------------------------------------------*/
    void readSerialChange(void);//读取选中串口
    void SerialOpen(void);      //打开串口
    void SerialClose(void);     //关闭串口

public slots:
//    void vRxSlotChanged(void);        //刷新接收槽函数连接
//    void vTxSlotChanged(void);        //刷新发送槽函数连接
signals:
    void vOpenSerial(bool & isOpen);
    void vCloseSerial(void);
    void vTxError(void);
private slots:
    void on_openserialBt_clicked();

private:
    Ui::MainWindow *ui;

protected:
//    void closeEvent(QCloseEvent *event);
    void doCritical(const QString &str);
    void doWarning(const QString &str);
    void doHelp(void);
    void doAbout(void);
};
#endif // MAINWINDOW_H
