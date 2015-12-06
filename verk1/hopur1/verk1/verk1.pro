QT += core
QT -= gui

TARGET = verk1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Scientist.cpp \
    Service.cpp \
    data.cpp \
    ui.cpp

HEADERS += \
    Scientist.h \
    Service.h \
    data.h \
    ui.h

DISTFILES +=

