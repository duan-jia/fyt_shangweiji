#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vserialcom.h>
#include <QMainWindow>
#include<QSerialPort>
#include<windows.h>
#include<dbt.h>
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

//     vSerialCom    vSerialCtr;

    /*-------------函数接口-------------------*/
    void InitDetection(void);
    void WindownInit(void);
    void SerialOpen(void);
    void SerialClose(void);
public slots:

signals:
    void vOpenSerial(bool & isOpen);
    void vCloseSerial(void);

private slots:
    void on_openserialBt_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
