QT += core gui serialport opengl concurrent network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

LIBS += -lOpengl32 \
        -lglu32 \
#        -lglut

# 支持OpenGL
DEFINES += QCUSTOMPLOT_USE_OPENGL\
           QT_DEPRECATED_WARNINGS

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS \
           QCUSTOMPLOT_USE_OPENGL

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    control_class/vCombox.cpp \
    control_class/vOpenGL/model.cpp \
    control_class/vOpenGL/openglscene.cpp \
    control_class/vOpenGL/vopenglwidget.cpp \
    control_class/vQCustomplot/qcustomplot.cpp \
    control_class/vQCustomplot/vTracer.cpp \
    control_class/vQCustomplot/vqcustomplot.cpp \
    control_class/vplaintextedit.cpp \
    control_class/vqlineedithex.cpp \
    control_class/vqtextedit.cpp \
    device/Protocol/CRC_Protocol/bsp_crc16.cpp \
    device/Protocol/CRC_Protocol/bsp_crc8.cpp \
    device/Protocol/bsp_protocol.cpp \
    device/vcodeconverter.cpp \
    device/vqserialrxthread.cpp \
    device/vqserialtxthread.cpp \
    device/vseaskyport.cpp \
    device/vserialport.cpp \
    main.cpp \
    mainwindow.cpp \
    vserialcom.cpp

HEADERS += \
    control_class/vCombox.h \
    control_class/vOpenGL/model.h \
    control_class/vOpenGL/openglscene.h \
    control_class/vOpenGL/point3d.h \
    control_class/vOpenGL/vopenglwidget.h \
    control_class/vQCustomplot/qcustomplot.h \
    control_class/vQCustomplot/vqcustomplot.h \
    control_class/vQCustomplot/vtracer.h \
    control_class/vplaintextedit.h \
    control_class/vqlineedithex.h \
    control_class/vqtextedit.h \
    device/Protocol/CRC_Protocol/bsp_crc16.h \
    device/Protocol/CRC_Protocol/bsp_crc8.h \
    device/Protocol/bsp_protocol.h \
    device/vcodeconverter.h \
    device/vqserialrxthread.h \
    device/vqserialtxthread.h \
    device/vseaskyport.h \
    device/vserialport.h \
    mainwindow.h \
    vserialcom.h

FORMS += \
    mainwindow.ui

INCLUDEPATH += ./device\
                ./control_class \
                ./control_class/vQCustomplot\
                ./control_class/vOpenGL\

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# 支持QCustomPlot
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

DISTFILES += \
    control_class/vQCustomplot/GPL.txt \
    control_class/vQCustomplot/changelog.txt

