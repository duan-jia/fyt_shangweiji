/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <vCombox.h>
#include <vcustomwidget.h>
#include <vplaintextedit.h>
#include <vqcustomplot.h>
#include <vqtextedit.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget1;
    QWidget *tab1_1;
    QGridLayout *gridLayout_28;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QWidget *widget1;
    QGridLayout *gridLayout_7;
    vPlainTextEdit *plainTextRx;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout_30;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEditCom1;
    vCombox *serialCb;
    QLineEdit *lineEditCom2;
    vCombox *baudrateCb;
    QLineEdit *lineEditCom3;
    vCombox *stopCb;
    QLineEdit *lineEditCom4;
    vCombox *dataCb;
    QLineEdit *lineEditCom5;
    vCombox *checkoutCb;
    QLineEdit *lineEditCom6;
    vCombox *comboBoxCom6;
    QLineEdit *lineEditCom7;
    vCombox *comboBoxCom7;
    QPushButton *pushButtonRx1;
    QPushButton *pushButtonRx2;
    QGridLayout *gridLayout_29;
    QGridLayout *gridLayoutCom2;
    QCheckBox *checkBoxRx1;
    QCheckBox *checkBoxRx2;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOpen;
    QWidget *widget3;
    QGridLayout *gridLayout_11;
    QTabWidget *tabWidget;
    QWidget *tabSendTx1;
    QGridLayout *gridLayout_10;
    vQTextEdit *plainTextTx;
    QWidget *tabSendTx2;
    QGridLayout *gridLayout_13;
    QScrollArea *scrollAreaSend;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_9;
    QGroupBox *vQGroupBox;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *realtimeTxCb;
    QGridLayout *gridLayout_8;
    QSpinBox *spinBox;
    QLabel *label;
    QPushButton *pushButtonTx1;
    QPushButton *pushButtonTx2;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab1_2;
    QGridLayout *gridLayout_25;
    QGridLayout *gridLayout_24;
    QWidget *widget_2;
    QGridLayout *gridLayout_17;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_16;
    vCombox *comboBox;
    QPushButton *pushButton_4;
    QGroupBox *groupBoxV1;
    QGridLayout *gridLayout_14;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QGridLayout *gridLayout_12;
    QSpinBox *spinBox_2;
    QLabel *label_2;
    QPushButton *protocolTxBt;
    QGroupBox *groupBoxV2;
    QGridLayout *gridLayout_15;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_20;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_18;
    QScrollArea *scrollAreaS1;
    QWidget *scrollAreaWidgetContents_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_19;
    QScrollArea *scrollAreaS2;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_23;
    QWidget *widget_4;
    QGridLayout *gridLayout_22;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_4;
    QWidget *widget_5;
    QGridLayout *gridLayout_21;
    vPlainTextEdit *plainTextEdit;
    QWidget *tab1_3;
    QGridLayout *gridLayout_59;
    QGridLayout *gridLayout_55;
    QWidget *widget_12;
    QGridLayout *gridLayout_56;
    vQCustomPlot *widgetScope;
    QWidget *widget_11;
    QGridLayout *gridLayout_58;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_57;
    QGridLayout *gridLayout_2;
    QPushButton *PIDWriteBt;
    QLineEdit *lineEdit_D2;
    QLineEdit *lineEdit_P2;
    QLineEdit *lineEdit_I1;
    QLineEdit *lineEdit_P1;
    QLineEdit *lineEdit_D1;
    QLineEdit *lineEdit_I2;
    QPushButton *PIDReadBt;
    QSpacerItem *verticalSpacer_5;
    vCustomWidget *widgetScope1;
    QSpacerItem *horizontalSpacer_2;
    vCustomWidget *widgetScope2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(909, 679);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        tabWidget1 = new QTabWidget(centralwidget);
        tabWidget1->setObjectName(QString::fromUtf8("tabWidget1"));
        tabWidget1->setEnabled(true);
        tabWidget1->setIconSize(QSize(0, 0));
        tab1_1 = new QWidget();
        tab1_1->setObjectName(QString::fromUtf8("tab1_1"));
        gridLayout_28 = new QGridLayout(tab1_1);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        widget = new QWidget(tab1_1);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        gridLayout_7 = new QGridLayout(widget1);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        plainTextRx = new vPlainTextEdit(widget1);
        plainTextRx->setObjectName(QString::fromUtf8("plainTextRx"));
        plainTextRx->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_7->addWidget(plainTextRx, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget1, 0, 0, 2, 1);

        verticalSpacer = new QSpacerItem(128, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 1, 1, 1);

        groupBox2 = new QGroupBox(widget);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        groupBox2->setMinimumSize(QSize(192, 320));
        groupBox2->setMaximumSize(QSize(192, 320));
        gridLayout_30 = new QGridLayout(groupBox2);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        gridLayout_30->setContentsMargins(3, 3, 3, 3);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lineEditCom1 = new QLineEdit(groupBox2);
        lineEditCom1->setObjectName(QString::fromUtf8("lineEditCom1"));
        lineEditCom1->setMinimumSize(QSize(72, 24));
        lineEditCom1->setMaximumSize(QSize(72, 16777215));
        lineEditCom1->setReadOnly(true);

        gridLayout_5->addWidget(lineEditCom1, 0, 0, 1, 1);

        serialCb = new vCombox(groupBox2);
        serialCb->setObjectName(QString::fromUtf8("serialCb"));
        serialCb->setMinimumSize(QSize(0, 24));
        serialCb->setMaximumSize(QSize(16777215, 24));

        gridLayout_5->addWidget(serialCb, 0, 1, 1, 1);

        lineEditCom2 = new QLineEdit(groupBox2);
        lineEditCom2->setObjectName(QString::fromUtf8("lineEditCom2"));
        lineEditCom2->setMinimumSize(QSize(72, 24));
        lineEditCom2->setMaximumSize(QSize(72, 16777215));
        lineEditCom2->setReadOnly(true);

        gridLayout_5->addWidget(lineEditCom2, 1, 0, 1, 1);

        baudrateCb = new vCombox(groupBox2);
        baudrateCb->setObjectName(QString::fromUtf8("baudrateCb"));
        baudrateCb->setMinimumSize(QSize(0, 24));
        baudrateCb->setMaximumSize(QSize(16777215, 24));

        gridLayout_5->addWidget(baudrateCb, 1, 1, 1, 1);

        lineEditCom3 = new QLineEdit(groupBox2);
        lineEditCom3->setObjectName(QString::fromUtf8("lineEditCom3"));
        lineEditCom3->setMinimumSize(QSize(72, 24));
        lineEditCom3->setMaximumSize(QSize(72, 16777215));
        lineEditCom3->setReadOnly(true);

        gridLayout_5->addWidget(lineEditCom3, 2, 0, 1, 1);

        stopCb = new vCombox(groupBox2);
        stopCb->setObjectName(QString::fromUtf8("stopCb"));
        stopCb->setMinimumSize(QSize(0, 24));
        stopCb->setMaximumSize(QSize(16777215, 24));

        gridLayout_5->addWidget(stopCb, 2, 1, 1, 1);

        lineEditCom4 = new QLineEdit(groupBox2);
        lineEditCom4->setObjectName(QString::fromUtf8("lineEditCom4"));
        lineEditCom4->setMinimumSize(QSize(72, 24));
        lineEditCom4->setMaximumSize(QSize(72, 16777215));
        lineEditCom4->setReadOnly(true);

        gridLayout_5->addWidget(lineEditCom4, 3, 0, 1, 1);

        dataCb = new vCombox(groupBox2);
        dataCb->setObjectName(QString::fromUtf8("dataCb"));
        dataCb->setMinimumSize(QSize(0, 24));
        dataCb->setMaximumSize(QSize(16777215, 24));

        gridLayout_5->addWidget(dataCb, 3, 1, 1, 1);

        lineEditCom5 = new QLineEdit(groupBox2);
        lineEditCom5->setObjectName(QString::fromUtf8("lineEditCom5"));
        lineEditCom5->setMinimumSize(QSize(72, 24));
        lineEditCom5->setMaximumSize(QSize(72, 16777215));
        lineEditCom5->setReadOnly(true);

        gridLayout_5->addWidget(lineEditCom5, 4, 0, 1, 1);

        checkoutCb = new vCombox(groupBox2);
        checkoutCb->setObjectName(QString::fromUtf8("checkoutCb"));
        checkoutCb->setMinimumSize(QSize(0, 24));
        checkoutCb->setMaximumSize(QSize(16777215, 24));

        gridLayout_5->addWidget(checkoutCb, 4, 1, 1, 1);

        lineEditCom6 = new QLineEdit(groupBox2);
        lineEditCom6->setObjectName(QString::fromUtf8("lineEditCom6"));
        lineEditCom6->setMinimumSize(QSize(72, 24));
        lineEditCom6->setMaximumSize(QSize(72, 16777215));
        lineEditCom6->setReadOnly(true);

        gridLayout_5->addWidget(lineEditCom6, 5, 0, 1, 1);

        comboBoxCom6 = new vCombox(groupBox2);
        comboBoxCom6->setObjectName(QString::fromUtf8("comboBoxCom6"));
        comboBoxCom6->setMinimumSize(QSize(0, 24));
        comboBoxCom6->setMaximumSize(QSize(16777215, 24));

        gridLayout_5->addWidget(comboBoxCom6, 5, 1, 1, 1);

        lineEditCom7 = new QLineEdit(groupBox2);
        lineEditCom7->setObjectName(QString::fromUtf8("lineEditCom7"));
        lineEditCom7->setMinimumSize(QSize(72, 24));
        lineEditCom7->setMaximumSize(QSize(72, 16777215));
        lineEditCom7->setReadOnly(true);

        gridLayout_5->addWidget(lineEditCom7, 6, 0, 1, 1);

        comboBoxCom7 = new vCombox(groupBox2);
        comboBoxCom7->setObjectName(QString::fromUtf8("comboBoxCom7"));
        comboBoxCom7->setMinimumSize(QSize(0, 24));
        comboBoxCom7->setMaximumSize(QSize(16777215, 24));

        gridLayout_5->addWidget(comboBoxCom7, 6, 1, 1, 1);

        pushButtonRx1 = new QPushButton(groupBox2);
        pushButtonRx1->setObjectName(QString::fromUtf8("pushButtonRx1"));
        pushButtonRx1->setMinimumSize(QSize(72, 24));
        pushButtonRx1->setMaximumSize(QSize(72, 24));

        gridLayout_5->addWidget(pushButtonRx1, 7, 0, 1, 1);

        pushButtonRx2 = new QPushButton(groupBox2);
        pushButtonRx2->setObjectName(QString::fromUtf8("pushButtonRx2"));
        pushButtonRx2->setMinimumSize(QSize(0, 24));
        pushButtonRx2->setMaximumSize(QSize(16777215, 24));

        gridLayout_5->addWidget(pushButtonRx2, 7, 1, 1, 1);


        gridLayout_30->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_29 = new QGridLayout();
        gridLayout_29->setSpacing(0);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        gridLayoutCom2 = new QGridLayout();
        gridLayoutCom2->setObjectName(QString::fromUtf8("gridLayoutCom2"));
        checkBoxRx1 = new QCheckBox(groupBox2);
        checkBoxRx1->setObjectName(QString::fromUtf8("checkBoxRx1"));
        checkBoxRx1->setMinimumSize(QSize(72, 24));
        checkBoxRx1->setMaximumSize(QSize(72, 24));

        gridLayoutCom2->addWidget(checkBoxRx1, 0, 0, 1, 1);

        checkBoxRx2 = new QCheckBox(groupBox2);
        checkBoxRx2->setObjectName(QString::fromUtf8("checkBoxRx2"));
        checkBoxRx2->setMinimumSize(QSize(72, 24));
        checkBoxRx2->setMaximumSize(QSize(72, 24));

        gridLayoutCom2->addWidget(checkBoxRx2, 1, 0, 1, 1);


        gridLayout_29->addLayout(gridLayoutCom2, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButtonOpen = new QPushButton(groupBox2);
        pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));
        pushButtonOpen->setMinimumSize(QSize(64, 64));
        pushButtonOpen->setMaximumSize(QSize(64, 64));
        pushButtonOpen->setCheckable(true);

        gridLayout_6->addWidget(pushButtonOpen, 0, 1, 1, 1);


        gridLayout_29->addLayout(gridLayout_6, 0, 1, 1, 1);


        gridLayout_30->addLayout(gridLayout_29, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox2, 0, 1, 1, 1);


        gridLayout_28->addWidget(widget, 0, 0, 1, 1);

        widget3 = new QWidget(tab1_1);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setMinimumSize(QSize(0, 0));
        widget3->setMaximumSize(QSize(16777215, 238));
        gridLayout_11 = new QGridLayout(widget3);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(3, 3, 3, 3);
        tabWidget = new QTabWidget(widget3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabSendTx1 = new QWidget();
        tabSendTx1->setObjectName(QString::fromUtf8("tabSendTx1"));
        gridLayout_10 = new QGridLayout(tabSendTx1);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        plainTextTx = new vQTextEdit(tabSendTx1);
        plainTextTx->setObjectName(QString::fromUtf8("plainTextTx"));

        gridLayout_10->addWidget(plainTextTx, 0, 0, 1, 1);

        tabWidget->addTab(tabSendTx1, QString());
        tabSendTx2 = new QWidget();
        tabSendTx2->setObjectName(QString::fromUtf8("tabSendTx2"));
        gridLayout_13 = new QGridLayout(tabSendTx2);
        gridLayout_13->setSpacing(0);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        scrollAreaSend = new QScrollArea(tabSendTx2);
        scrollAreaSend->setObjectName(QString::fromUtf8("scrollAreaSend"));
        scrollAreaSend->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 741, 201));
        scrollAreaSend->setWidget(scrollAreaWidgetContents);

        gridLayout_13->addWidget(scrollAreaSend, 0, 0, 1, 1);

        tabWidget->addTab(tabSendTx2, QString());

        gridLayout_11->addWidget(tabWidget, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        vQGroupBox = new QGroupBox(widget3);
        vQGroupBox->setObjectName(QString::fromUtf8("vQGroupBox"));
        vQGroupBox->setMinimumSize(QSize(110, 229));
        gridLayout_3 = new QGridLayout(vQGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(3, 3, 3, 3);
        checkBox_1 = new QCheckBox(vQGroupBox);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        checkBox_1->setMinimumSize(QSize(0, 24));
        checkBox_1->setMaximumSize(QSize(16777215, 24));

        gridLayout_3->addWidget(checkBox_1, 2, 0, 1, 1);

        checkBox_2 = new QCheckBox(vQGroupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setMinimumSize(QSize(0, 24));
        checkBox_2->setMaximumSize(QSize(16777215, 24));

        gridLayout_3->addWidget(checkBox_2, 3, 0, 1, 1);

        checkBox_3 = new QCheckBox(vQGroupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setMinimumSize(QSize(0, 24));
        checkBox_3->setMaximumSize(QSize(16777215, 24));

        gridLayout_3->addWidget(checkBox_3, 4, 0, 1, 1);

        realtimeTxCb = new QCheckBox(vQGroupBox);
        realtimeTxCb->setObjectName(QString::fromUtf8("realtimeTxCb"));
        realtimeTxCb->setMinimumSize(QSize(0, 24));
        realtimeTxCb->setMaximumSize(QSize(16777215, 24));

        gridLayout_3->addWidget(realtimeTxCb, 5, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        spinBox = new QSpinBox(vQGroupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimumSize(QSize(0, 24));
        spinBox->setMaximumSize(QSize(16777215, 24));
        spinBox->setMinimum(1);
        spinBox->setMaximum(60000);
        spinBox->setSingleStep(1);
        spinBox->setValue(1);

        gridLayout_8->addWidget(spinBox, 0, 0, 1, 1);

        label = new QLabel(vQGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 24));
        label->setMaximumSize(QSize(16777215, 24));

        gridLayout_8->addWidget(label, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_8, 6, 0, 1, 1);

        pushButtonTx1 = new QPushButton(vQGroupBox);
        pushButtonTx1->setObjectName(QString::fromUtf8("pushButtonTx1"));
        pushButtonTx1->setMinimumSize(QSize(0, 24));
        pushButtonTx1->setMaximumSize(QSize(16777215, 24));

        gridLayout_3->addWidget(pushButtonTx1, 0, 0, 1, 1);

        pushButtonTx2 = new QPushButton(vQGroupBox);
        pushButtonTx2->setObjectName(QString::fromUtf8("pushButtonTx2"));
        pushButtonTx2->setMinimumSize(QSize(0, 24));
        pushButtonTx2->setMaximumSize(QSize(16777215, 24));

        gridLayout_3->addWidget(pushButtonTx2, 1, 0, 1, 1);


        gridLayout_9->addWidget(vQGroupBox, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(107, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_2, 1, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_9, 0, 1, 1, 1);


        gridLayout_28->addWidget(widget3, 1, 0, 1, 1);

        tabWidget1->addTab(tab1_1, QString());
        tab1_2 = new QWidget();
        tab1_2->setObjectName(QString::fromUtf8("tab1_2"));
        gridLayout_25 = new QGridLayout(tab1_2);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        widget_2 = new QWidget(tab1_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(180, 407));
        widget_2->setMaximumSize(QSize(180, 407));
        gridLayout_17 = new QGridLayout(widget_2);
        gridLayout_17->setSpacing(3);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(180, 53));
        groupBox->setMaximumSize(QSize(180, 53));
        gridLayout_16 = new QGridLayout(groupBox);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(6, 6, 6, 6);
        comboBox = new vCombox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(80, 24));
        comboBox->setMaximumSize(QSize(80, 24));

        gridLayout_16->addWidget(comboBox, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(80, 24));
        pushButton_4->setMaximumSize(QSize(80, 24));
        pushButton_4->setCheckable(true);

        gridLayout_16->addWidget(pushButton_4, 0, 1, 1, 1);


        gridLayout_17->addWidget(groupBox, 0, 0, 1, 1);

        groupBoxV1 = new QGroupBox(widget_2);
        groupBoxV1->setObjectName(QString::fromUtf8("groupBoxV1"));
        groupBoxV1->setMinimumSize(QSize(180, 175));
        groupBoxV1->setMaximumSize(QSize(180, 175));
        groupBoxV1->setCursor(QCursor(Qt::ArrowCursor));
        groupBoxV1->setFocusPolicy(Qt::NoFocus);
        gridLayout_14 = new QGridLayout(groupBoxV1);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(6, 6, 6, 6);
        lineEdit = new QLineEdit(groupBoxV1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(80, 24));
        lineEdit->setMaximumSize(QSize(80, 24));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);

        gridLayout_14->addWidget(lineEdit, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBoxV1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(80, 24));
        lineEdit_2->setMaximumSize(QSize(80, 24));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(true);

        gridLayout_14->addWidget(lineEdit_2, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(groupBoxV1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(80, 24));
        lineEdit_3->setMaximumSize(QSize(80, 24));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_3->setReadOnly(true);

        gridLayout_14->addWidget(lineEdit_3, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(groupBoxV1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(80, 24));
        lineEdit_4->setMaximumSize(QSize(80, 24));
        lineEdit_4->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(lineEdit_4, 1, 1, 1, 1);

        lineEdit_5 = new QLineEdit(groupBoxV1);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(80, 24));
        lineEdit_5->setMaximumSize(QSize(80, 24));
        lineEdit_5->setAlignment(Qt::AlignCenter);
        lineEdit_5->setReadOnly(true);

        gridLayout_14->addWidget(lineEdit_5, 2, 0, 1, 1);

        lineEdit_6 = new QLineEdit(groupBoxV1);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(80, 24));
        lineEdit_6->setMaximumSize(QSize(80, 24));
        lineEdit_6->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(lineEdit_6, 2, 1, 1, 1);

        lineEdit_7 = new QLineEdit(groupBoxV1);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(80, 24));
        lineEdit_7->setMaximumSize(QSize(80, 24));
        lineEdit_7->setAlignment(Qt::AlignCenter);
        lineEdit_7->setReadOnly(true);

        gridLayout_14->addWidget(lineEdit_7, 3, 0, 1, 1);

        lineEdit_8 = new QLineEdit(groupBoxV1);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(80, 24));
        lineEdit_8->setMaximumSize(QSize(80, 24));
        lineEdit_8->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(lineEdit_8, 3, 1, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(3);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        spinBox_2 = new QSpinBox(groupBoxV1);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimumSize(QSize(32, 24));
        spinBox_2->setMaximumSize(QSize(128, 24));
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(60000);

        gridLayout_12->addWidget(spinBox_2, 0, 0, 1, 1);

        label_2 = new QLabel(groupBoxV1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(24, 24));
        label_2->setMaximumSize(QSize(24, 24));

        gridLayout_12->addWidget(label_2, 0, 1, 1, 1);


        gridLayout_14->addLayout(gridLayout_12, 4, 0, 1, 1);

        protocolTxBt = new QPushButton(groupBoxV1);
        protocolTxBt->setObjectName(QString::fromUtf8("protocolTxBt"));
        protocolTxBt->setMinimumSize(QSize(80, 24));
        protocolTxBt->setMaximumSize(QSize(80, 24));
        protocolTxBt->setCheckable(true);

        gridLayout_14->addWidget(protocolTxBt, 4, 1, 1, 1);


        gridLayout_17->addWidget(groupBoxV1, 1, 0, 1, 1);

        groupBoxV2 = new QGroupBox(widget_2);
        groupBoxV2->setObjectName(QString::fromUtf8("groupBoxV2"));
        groupBoxV2->setMinimumSize(QSize(180, 173));
        groupBoxV2->setMaximumSize(QSize(180, 173));
        gridLayout_15 = new QGridLayout(groupBoxV2);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(6, 6, 6, 6);
        lineEdit_9 = new QLineEdit(groupBoxV2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(80, 24));
        lineEdit_9->setMaximumSize(QSize(80, 24));
        lineEdit_9->setAlignment(Qt::AlignCenter);
        lineEdit_9->setReadOnly(true);

        gridLayout_15->addWidget(lineEdit_9, 0, 0, 1, 1);

        lineEdit_10 = new QLineEdit(groupBoxV2);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(80, 24));
        lineEdit_10->setMaximumSize(QSize(80, 24));
        lineEdit_10->setAlignment(Qt::AlignCenter);
        lineEdit_10->setReadOnly(true);

        gridLayout_15->addWidget(lineEdit_10, 0, 1, 1, 1);

        lineEdit_11 = new QLineEdit(groupBoxV2);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(80, 24));
        lineEdit_11->setMaximumSize(QSize(80, 24));
        lineEdit_11->setAlignment(Qt::AlignCenter);
        lineEdit_11->setReadOnly(true);

        gridLayout_15->addWidget(lineEdit_11, 1, 0, 1, 1);

        lineEdit_12 = new QLineEdit(groupBoxV2);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setMinimumSize(QSize(80, 24));
        lineEdit_12->setMaximumSize(QSize(80, 24));
        lineEdit_12->setAlignment(Qt::AlignCenter);
        lineEdit_12->setReadOnly(true);

        gridLayout_15->addWidget(lineEdit_12, 1, 1, 1, 1);

        lineEdit_13 = new QLineEdit(groupBoxV2);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setMinimumSize(QSize(80, 24));
        lineEdit_13->setMaximumSize(QSize(80, 24));
        lineEdit_13->setAlignment(Qt::AlignCenter);
        lineEdit_13->setReadOnly(true);

        gridLayout_15->addWidget(lineEdit_13, 2, 0, 1, 1);

        lineEdit_14 = new QLineEdit(groupBoxV2);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setMinimumSize(QSize(80, 24));
        lineEdit_14->setMaximumSize(QSize(80, 24));
        lineEdit_14->setAlignment(Qt::AlignCenter);
        lineEdit_14->setReadOnly(true);

        gridLayout_15->addWidget(lineEdit_14, 2, 1, 1, 1);

        lineEdit_15 = new QLineEdit(groupBoxV2);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setMinimumSize(QSize(80, 24));
        lineEdit_15->setMaximumSize(QSize(80, 24));
        lineEdit_15->setAlignment(Qt::AlignCenter);
        lineEdit_15->setReadOnly(true);

        gridLayout_15->addWidget(lineEdit_15, 3, 0, 1, 1);

        lineEdit_16 = new QLineEdit(groupBoxV2);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setMinimumSize(QSize(80, 24));
        lineEdit_16->setMaximumSize(QSize(80, 24));
        lineEdit_16->setAlignment(Qt::AlignCenter);
        lineEdit_16->setReadOnly(true);

        gridLayout_15->addWidget(lineEdit_16, 3, 1, 1, 1);

        pushButton = new QPushButton(groupBoxV2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 24));
        pushButton->setMaximumSize(QSize(80, 24));

        gridLayout_15->addWidget(pushButton, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBoxV2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(80, 24));
        pushButton_2->setMaximumSize(QSize(80, 24));

        gridLayout_15->addWidget(pushButton_2, 4, 1, 1, 1);


        gridLayout_17->addWidget(groupBoxV2, 2, 0, 1, 1);


        gridLayout_24->addWidget(widget_2, 0, 0, 1, 1);

        widget_3 = new QWidget(tab1_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_20 = new QGridLayout(widget_3);
        gridLayout_20->setSpacing(3);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_20->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(widget_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_18 = new QGridLayout(groupBox_2);
        gridLayout_18->setSpacing(3);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(3, 3, 3, 3);
        scrollAreaS1 = new QScrollArea(groupBox_2);
        scrollAreaS1->setObjectName(QString::fromUtf8("scrollAreaS1"));
        scrollAreaS1->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setEnabled(true);
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 331, 382));
        scrollAreaS1->setWidget(scrollAreaWidgetContents_2);

        gridLayout_18->addWidget(scrollAreaS1, 0, 0, 1, 1);


        gridLayout_20->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(widget_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_19 = new QGridLayout(groupBox_3);
        gridLayout_19->setSpacing(3);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(3, 3, 3, 3);
        scrollAreaS2 = new QScrollArea(groupBox_3);
        scrollAreaS2->setObjectName(QString::fromUtf8("scrollAreaS2"));
        scrollAreaS2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 331, 382));
        scrollAreaS2->setWidget(scrollAreaWidgetContents_3);

        gridLayout_19->addWidget(scrollAreaS2, 0, 0, 1, 1);


        gridLayout_20->addWidget(groupBox_3, 0, 1, 1, 1);


        gridLayout_24->addWidget(widget_3, 0, 1, 1, 1);


        gridLayout_25->addLayout(gridLayout_24, 0, 0, 1, 1);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        widget_4 = new QWidget(tab1_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(180, 0));
        widget_4->setMaximumSize(QSize(180, 16777215));
        gridLayout_22 = new QGridLayout(widget_4);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        gridLayout_22->setContentsMargins(3, 3, 3, 3);
        scrollArea = new QScrollArea(widget_4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 172, 145));
        scrollArea->setWidget(scrollAreaWidgetContents_4);

        gridLayout_22->addWidget(scrollArea, 0, 0, 1, 1);


        gridLayout_23->addWidget(widget_4, 0, 0, 1, 1);

        widget_5 = new QWidget(tab1_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_21 = new QGridLayout(widget_5);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_21->setContentsMargins(3, 3, 3, 3);
        plainTextEdit = new vPlainTextEdit(widget_5);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_21->addWidget(plainTextEdit, 0, 0, 1, 1);


        gridLayout_23->addWidget(widget_5, 0, 1, 1, 1);


        gridLayout_25->addLayout(gridLayout_23, 1, 0, 1, 1);

        tabWidget1->addTab(tab1_2, QString());
        tab1_3 = new QWidget();
        tab1_3->setObjectName(QString::fromUtf8("tab1_3"));
        gridLayout_59 = new QGridLayout(tab1_3);
        gridLayout_59->setObjectName(QString::fromUtf8("gridLayout_59"));
        gridLayout_55 = new QGridLayout();
        gridLayout_55->setSpacing(1);
        gridLayout_55->setObjectName(QString::fromUtf8("gridLayout_55"));
        widget_12 = new QWidget(tab1_3);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        gridLayout_56 = new QGridLayout(widget_12);
        gridLayout_56->setObjectName(QString::fromUtf8("gridLayout_56"));
        gridLayout_56->setContentsMargins(0, 3, 0, 3);
        widgetScope = new vQCustomPlot(widget_12);
        widgetScope->setObjectName(QString::fromUtf8("widgetScope"));
        widgetScope->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetScope->sizePolicy().hasHeightForWidth());
        widgetScope->setSizePolicy(sizePolicy);
        widgetScope->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setKerning(false);
        widgetScope->setFont(font);
        widgetScope->setLayoutDirection(Qt::LeftToRight);

        gridLayout_56->addWidget(widgetScope, 0, 0, 1, 1);


        gridLayout_55->addWidget(widget_12, 0, 1, 1, 1);

        widget_11 = new QWidget(tab1_3);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        gridLayout_58 = new QGridLayout(widget_11);
        gridLayout_58->setObjectName(QString::fromUtf8("gridLayout_58"));
        gridLayout_58->setVerticalSpacing(6);
        gridLayout_58->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QGroupBox(widget_11);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy1);
        groupBox_7->setMinimumSize(QSize(200, 181));
        groupBox_7->setMaximumSize(QSize(200, 181));
        groupBox_7->setLayoutDirection(Qt::LeftToRight);
        gridLayout_57 = new QGridLayout(groupBox_7);
        gridLayout_57->setObjectName(QString::fromUtf8("gridLayout_57"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        PIDWriteBt = new QPushButton(groupBox_7);
        PIDWriteBt->setObjectName(QString::fromUtf8("PIDWriteBt"));

        gridLayout_2->addWidget(PIDWriteBt, 3, 1, 1, 1);

        lineEdit_D2 = new QLineEdit(groupBox_7);
        lineEdit_D2->setObjectName(QString::fromUtf8("lineEdit_D2"));
        sizePolicy.setHeightForWidth(lineEdit_D2->sizePolicy().hasHeightForWidth());
        lineEdit_D2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_D2, 2, 1, 1, 1);

        lineEdit_P2 = new QLineEdit(groupBox_7);
        lineEdit_P2->setObjectName(QString::fromUtf8("lineEdit_P2"));
        sizePolicy.setHeightForWidth(lineEdit_P2->sizePolicy().hasHeightForWidth());
        lineEdit_P2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_P2, 0, 1, 1, 1);

        lineEdit_I1 = new QLineEdit(groupBox_7);
        lineEdit_I1->setObjectName(QString::fromUtf8("lineEdit_I1"));
        sizePolicy.setHeightForWidth(lineEdit_I1->sizePolicy().hasHeightForWidth());
        lineEdit_I1->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_I1, 1, 0, 1, 1);

        lineEdit_P1 = new QLineEdit(groupBox_7);
        lineEdit_P1->setObjectName(QString::fromUtf8("lineEdit_P1"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_P1->sizePolicy().hasHeightForWidth());
        lineEdit_P1->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(lineEdit_P1, 0, 0, 1, 1);

        lineEdit_D1 = new QLineEdit(groupBox_7);
        lineEdit_D1->setObjectName(QString::fromUtf8("lineEdit_D1"));
        sizePolicy.setHeightForWidth(lineEdit_D1->sizePolicy().hasHeightForWidth());
        lineEdit_D1->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_D1, 2, 0, 1, 1);

        lineEdit_I2 = new QLineEdit(groupBox_7);
        lineEdit_I2->setObjectName(QString::fromUtf8("lineEdit_I2"));
        sizePolicy.setHeightForWidth(lineEdit_I2->sizePolicy().hasHeightForWidth());
        lineEdit_I2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_I2, 1, 1, 1, 1);

        PIDReadBt = new QPushButton(groupBox_7);
        PIDReadBt->setObjectName(QString::fromUtf8("PIDReadBt"));

        gridLayout_2->addWidget(PIDReadBt, 3, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setRowStretch(3, 2);

        gridLayout_57->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_58->addWidget(groupBox_7, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(48, 351, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_58->addItem(verticalSpacer_5, 1, 0, 1, 1);


        gridLayout_55->addWidget(widget_11, 0, 0, 1, 1);

        gridLayout_55->setColumnStretch(0, 1);
        gridLayout_55->setColumnStretch(1, 8);

        gridLayout_59->addLayout(gridLayout_55, 0, 0, 1, 3);

        widgetScope1 = new vCustomWidget(tab1_3);
        widgetScope1->setObjectName(QString::fromUtf8("widgetScope1"));
        widgetScope1->setMaximumSize(QSize(16777215, 64));

        gridLayout_59->addWidget(widgetScope1, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(838, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_59->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        widgetScope2 = new vCustomWidget(tab1_3);
        widgetScope2->setObjectName(QString::fromUtf8("widgetScope2"));
        widgetScope2->setMaximumSize(QSize(16777215, 64));

        gridLayout_59->addWidget(widgetScope2, 1, 2, 1, 1);

        tabWidget1->addTab(tab1_3, QString());

        gridLayout->addWidget(tabWidget1, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 909, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget1->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        groupBox2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox2->setTitle(QCoreApplication::translate("MainWindow", "ComConfig", nullptr));
        lineEditCom1->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        lineEditCom2->setText(QCoreApplication::translate("MainWindow", "\346\263\242 \347\211\271 \347\216\207", nullptr));
        lineEditCom3->setText(QCoreApplication::translate("MainWindow", "\345\201\234 \346\255\242 \344\275\215", nullptr));
        lineEditCom4->setText(QCoreApplication::translate("MainWindow", "\346\225\260 \346\215\256 \344\275\215", nullptr));
        lineEditCom5->setText(QCoreApplication::translate("MainWindow", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        lineEditCom6->setText(QCoreApplication::translate("MainWindow", "\347\274\226\347\240\201\346\240\274\345\274\217", nullptr));
        lineEditCom7->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\265\201\346\216\247", nullptr));
        pushButtonRx1->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        pushButtonRx2->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\346\225\260\346\215\256", nullptr));
        checkBoxRx1->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266", nullptr));
        checkBoxRx2->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264\346\210\263", nullptr));
        pushButtonOpen->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabSendTx1), QCoreApplication::translate("MainWindow", "\345\215\225\346\235\241\345\217\221\351\200\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSendTx2), QCoreApplication::translate("MainWindow", "\345\244\232\346\235\241\345\217\221\351\200\201", nullptr));
        vQGroupBox->setTitle(QCoreApplication::translate("MainWindow", "TxConfig", nullptr));
        checkBox_1->setText(QCoreApplication::translate("MainWindow", "\345\244\232\346\235\241\345\217\221\351\200\201", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "\345\212\240\345\205\245\346\215\242\350\241\214\347\254\246", nullptr));
        realtimeTxCb->setText(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "mS", nullptr));
        pushButtonTx1->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        pushButtonTx2->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\346\225\260\346\215\256", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab1_1), QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Config", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\344\275\277\350\203\275\345\215\217\350\256\256", nullptr));
        groupBoxV1->setTitle(QCoreApplication::translate("MainWindow", "Tx", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "\345\270\247\345\244\264", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "0XA5", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "CMD-ID", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "\345\257\204\345\255\230\345\231\250", nullptr));
        lineEdit_6->setText(QString());
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\351\225\277\345\272\246", nullptr));
        lineEdit_8->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "mS", nullptr));
        protocolTxBt->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\344\275\277\350\203\275", nullptr));
        groupBoxV2->setTitle(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("MainWindow", "\345\270\247\345\244\264", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("MainWindow", "0XA5", nullptr));
        lineEdit_11->setText(QCoreApplication::translate("MainWindow", "CMD-ID", nullptr));
        lineEdit_12->setText(QString());
        lineEdit_13->setText(QCoreApplication::translate("MainWindow", "\345\257\204\345\255\230\345\231\250", nullptr));
        lineEdit_14->setText(QString());
        lineEdit_15->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\351\225\277\345\272\246", nullptr));
        lineEdit_16->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "TxData", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "RxData", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab1_2), QCoreApplication::translate("MainWindow", "\351\200\232\344\277\241\345\215\217\350\256\256", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "PID\345\217\202\346\225\260\350\260\203\350\212\202", nullptr));
        PIDWriteBt->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\217\202\346\225\260", nullptr));
        PIDReadBt->setText(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\257\273\345\217\226", nullptr));
        tabWidget1->setTabText(tabWidget1->indexOf(tab1_3), QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\347\244\272\346\263\242\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
