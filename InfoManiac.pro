#-------------------------------------------------
#
# Project created by QtCreator 2012-09-13T00:09:01
#
#-------------------------------------------------

QT       += core gui
VERSION = 1.0
NONSTATIC =

TARGET = InfoManiac
TEMPLATE = app


SOURCES += main.cpp\
        infomaniac.cpp \
    newcolumndialog.cpp \
    errordialog.cpp \
    cfginterface.cpp \
    dbinterface.cpp \
    settingsdialog.cpp

HEADERS  += \
    newcolumndialog.h \
    errordialog.h \
    infomaniac.h \
    cfginterface.h \
    dbinterface.h \
    settingsdialog.h

FORMS    += infomaniac.ui \
    newcolumndialog.ui \
    errordialog.ui \
    settingsdialog.ui

Release:DESTDIR = $$TARGET-$$VERSION$$NONSTATIC

CONFIG += static
