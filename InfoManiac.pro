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
    infotype.cpp \
    member.cpp

HEADERS  += infomaniac.h \
    infotype.h \
    member.h

FORMS    += infomaniac.ui

Release:DESTDIR = $$TARGET-$$VERSION$$NONSTATIC

CONFIG += static
