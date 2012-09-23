#-------------------------------------------------
#
# Project created by QtCreator 2012-09-13T00:09:01
#
#-------------------------------------------------

QT       += core gui
VERSION = 1.3
STAGE = Alpha
TYPE = Static

TARGET = InfoManiac
TEMPLATE = app


SOURCES += main.cpp\
        infomaniac.cpp \
    newcolumndialog.cpp \
    errordialog.cpp \
    cfginterface.cpp \
    dbinterface.cpp \
    settingsdialog.cpp \
    exportdialog.cpp \
    eventswindow.cpp

HEADERS  += \
    newcolumndialog.h \
    errordialog.h \
    infomaniac.h \
    cfginterface.h \
    dbinterface.h \
    settingsdialog.h \
    exportdialog.h \
    eventswindow.h

FORMS    += infomaniac.ui \
    newcolumndialog.ui \
    errordialog.ui \
    settingsdialog.ui \
    exportdialog.ui \
    eventswindow.ui

Release:DESTDIR = $$TARGET-$$VERSION-$$STAGE-$$TYPE

CONFIG += static
