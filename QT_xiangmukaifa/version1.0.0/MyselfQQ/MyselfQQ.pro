#-------------------------------------------------
#
# Project created by QtCreator 2019-07-08T09:43:10
#
#-------------------------------------------------

QT       += core gui network
QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyselfQQ
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    dialoglist.cpp

HEADERS  += widget.h \
    dialoglist.h

FORMS    += widget.ui \
    dialoglist.ui

RESOURCES += \
    res.qrc

CONFIG += c++11
