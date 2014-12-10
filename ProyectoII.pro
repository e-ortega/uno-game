#-------------------------------------------------
#
# Project created by QtCreator 2014-12-04T00:26:27
#
#-------------------------------------------------

QT       += core gui
QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProyectoII
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    Card.cpp \
    Deck.cpp \
    Player_Hand.cpp \
    Player.cpp \
    Uno_Game.cpp

HEADERS  += MainWindow.h \
    Card.h \
    Deck.h \
    Player_Hand.h \
    Player.h \
    Uno_Game.h

FORMS    += MainWindow.ui

RESOURCES += \
    sources/sources.qrc
