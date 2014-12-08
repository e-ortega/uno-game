#-------------------------------------------------
#
# Project created by QtCreator 2014-12-04T00:26:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProyectoII
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    Card.cpp \
    Deck.cpp

HEADERS  += MainWindow.h \
    Card.h \
    Deck.h

FORMS    += MainWindow.ui

RESOURCES += \
    sources/sources.qrc
