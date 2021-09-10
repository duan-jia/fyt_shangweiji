#include "mainwindow.h"
#include <QApplication>
const QString SerialScopeVersion = QString::fromUtf16(u"fyt串口调试助手 V0.0.1");
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QFile file(":/qss/vQss/vQss.css");
    if (file.open(QFile::ReadOnly))
    {
        QTextStream filetext(&file);
        QString stylesheet = filetext.readAll();
        qApp->setStyleSheet(stylesheet);
    }
    a.setWindowIcon(QIcon(":/image/image/main.ico"));
    w.setWindowTitle(SerialScopeVersion);
    w.show();
    return a.exec();
}
