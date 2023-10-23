#-------------------------------------------------
#
# Project created by QtCreator 2021-12-21T12:05:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT       += sql

TARGET = DFT-RT
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        addcore.cpp \
        adddag.cpp \
        addtask.cpp \
        addtask2.cpp \
        addtriplet.cpp \
        main.cpp \
        mainwindow.cpp \
        src/core.cpp \
        src/simul.cpp \
        src/table.cpp \
        src/task.cpp

HEADERS += \
        addcore.h \
        adddag.h \
        addtask.h \
        addtask2.h \
        addtriplet.h \
        include/table.h \
        mainwindow.h \
        include/core.h \
        include/simul.h \
        include/task.h

FORMS += \
    addcore.ui \
    adddag.ui \
    addtask.ui \
    addtask2.ui \
    addtriplet.ui \
    mainwindow.ui
