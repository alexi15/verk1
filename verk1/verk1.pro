QT += core
QT += sql
QT -= gui

TARGET = verk1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Scientist.cpp \
    data.cpp \
    ui.cpp \
    database.cpp \
    computers.cpp \
    ScientistService.cpp

HEADERS += \
    Scientist.h \
    data.h \
    ui.h \
    database.h \
    computers.h \
    ScientistService.h

DISTFILES +=

