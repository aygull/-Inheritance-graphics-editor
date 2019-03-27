#-------------------------------------------------
#
# Project created by QtCreator 2019-02-11T13:28:07
#
#-------------------------------------------------

QT       += core gui
CONFIG +=c++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = my_project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    point.cpp \
    mygraph.cpp \
    circle.cpp \
    square.cpp \
    hexagon.cpp

HEADERS  += mainwindow.h \
    point.h \
    mygraph.h \
    circle.h \
    square.h \
    hexagon.h

FORMS    += \
    mainwindow.ui
