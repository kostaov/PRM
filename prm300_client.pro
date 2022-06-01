#-------------------------------------------------
#
# Project created by QtCreator 2013-07-26T10:28:53
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

DESTDIR = ../bin
TARGET = PRM-300
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    PrmClient.cpp

HEADERS  += mainwindow.h \
    PrmClient.h

FORMS    += mainwindow.ui

RC_FILE = icon.rc
