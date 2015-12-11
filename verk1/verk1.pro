QT += core
QT += sql
QT -= gui

TARGET = verk1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Scientist.cpp \
    ui.cpp \
    computers.cpp \
    ScientistService.cpp \
    ComputerData.cpp \
    ScientistData.cpp \
    ComputerService.cpp

HEADERS += \
    Scientist.h \
    ui.h \
    computers.h \
    ScientistService.h \
    ComputerData.h \
    ScientistData.h \
    computerservice.h

DISTFILES +=

