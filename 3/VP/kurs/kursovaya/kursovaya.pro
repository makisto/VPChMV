#-------------------------------------------------
#
# Project created by QtCreator 2015-08-10T16:08:24
#
#-------------------------------------------------

QT       += core
QT       += gui
QT       += sql
QT       += axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataBase
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    database.cpp \
    forminfo.cpp \
    addevent.cpp \
    eventadd.cpp

HEADERS  += mainwindow.h \
    database.h \
    forminfo.h \
    addevent.h \
    eventadd.h

FORMS    += mainwindow.ui \
    forminfo.ui \
    addevent.ui \
    eventadd.ui
