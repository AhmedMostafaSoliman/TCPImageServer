#-------------------------------------------------
#
# Project created by QtCreator 2015-12-02T20:08:14
#
#-------------------------------------------------

QT       += core gui
QT += network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ImageTCP
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    server.cpp \
    serverthread.cpp

HEADERS  += mainwindow.h \
    server.h \
    serverthread.h

FORMS    += mainwindow.ui
