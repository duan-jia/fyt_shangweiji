#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vserialcom.h>
#include <QMainWindow>
#include<QSerialPort>
#include<windows.h>
#include<dbt.h>
#include<QMessageBox>

#include<device/vqlineedithex.h>
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
    bool          rxModeCfg = false;//是否使能协议
    bool          txModeCfg = false;//是否使能协议
    /*-------------函数接口-------------------*/
    void DependenceAddr(void); //0.初始化相关的地址
    void InitDetection(void);//2.串口检测相关的初始化,检测串口设备
    void UpdateComInfo(void);//3.串口设置内容初始化，波特率等
    void UpdateSerial(void);   //4.初始化串口设备更新支持
    void InitSerialTx(void);   //5.加载信息发送配置
    void InitSerialRx(void);   //6.加载信息接收配置
    void InfoChangedInit(void);    //7.串口信息更新，只需要初始化一次
    void WindownInit(void);
    /*-------------------------------------------*/
    void readSerialChange(void);//读取选中串口
    void SerialOpen(void);      //打开串口
    void SerialClose(void);     //关闭串口
    /*--------------界面配置恢复相关----------------*/
    void ReadSettings(void);       //启动时读取设置
public slots:
    void vTxModeTimerCfg(void);       //发送的定时器控制
signals:
    void vOpenSerial(bool & isOpen);
    void vCloseSerial(void);
    void vTxError(void);
private slots:

private:
    Ui::MainWindow *ui;

protected:
    void doCritical(const QString &str);
    void doWarning(const QString &str);
    void doHelp(void);
    void doAbout(void);
};
#endif // MAINWINDOW_H
