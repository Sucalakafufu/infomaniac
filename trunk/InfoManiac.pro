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
    errordialog.cpp

HEADERS  += \
    infotype.h \
    newcolumndialog.h \
    errordialog.h

FORMS    += infomaniac.ui \
    newcolumndialog.ui \
    errordialog.ui

Release:DESTDIR = $$TARGET-$$VERSION$$NONSTATIC

CONFIG += static
