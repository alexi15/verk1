QT += core
QT += sql
QT -= gui

TARGET = verk1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Scientist.cpp \
    Service.cpp \
    ui.cpp \
    computers.cpp \
    ComputerData.cpp \
    ScientistData.cpp

HEADERS += \
    Scientist.h \
    Service.h \
    ui.h \
    computers.h \
    ScientistData.h \
    ComputerData.h

DISTFILES +=

