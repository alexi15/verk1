#-------------------------------------------------
#
# Project created by QtCreator 2015-12-11T10:16:16
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Display
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ComputerData.cpp \
    computers.cpp \
    ComputerService.cpp \
    Scientist.cpp \
    ScientistData.cpp \
    ScientistService.cpp \
    add.cpp

HEADERS  += mainwindow.h \
    ComputerData.h \
    computers.h \
    computerservice.h \
    Scientist.h \
    ScientistData.h \
    ScientistService.h \
    add.h

FORMS    += mainwindow.ui \
    add.ui
