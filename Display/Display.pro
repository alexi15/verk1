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
    add.cpp \
    addcomp.cpp \
    relsci.cpp \
    relcom.cpp \
    addcomtosci.cpp \
    addscitocom.cpp \
    edit.cpp \
    editsci.cpp

HEADERS  += mainwindow.h \
    ComputerData.h \
    computers.h \
    computerservice.h \
    Scientist.h \
    ScientistData.h \
    ScientistService.h \
    add.h \
    addcomp.h \
    relsci.h \
    relcom.h \
    addcomtosci.h \
    addscitocom.h \
    edit.h \
    editsci.h

FORMS    += mainwindow.ui \
    add.ui \
    addcomp.ui \
    relcom.ui \
    addcomtosci.ui \
    addscitocom.ui \
    relsci.ui \
    edit.ui \
    editsci.ui

DISTFILES += \
    ../.git/refs/stash
