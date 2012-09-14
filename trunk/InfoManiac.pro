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
        infomaniac.cpp

HEADERS  += infomaniac.h

FORMS    += infomaniac.ui

Debug:DESTDIR = $$TARGET-$$VERSION-Debug

Release:DESTDIR = $$TARGET-$$VERSION$$NONSTATIC

CONFIG += static
