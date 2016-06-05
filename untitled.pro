#-------------------------------------------------
#
# Project created by QtCreator 2016-05-30T16:05:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app


SOURCES +=\
    src/controller/Controller.cpp \
    src/exceptions/BiosNotReadableException.cpp \
    src/exceptions/BiosNotWriteableException.cpp \
    src/exceptions/Exception.cpp \
    src/logs/Log.cpp \
    src/view/qt/MainWindow.cpp \
    src/view/Gui.cpp \
    src/view/GuiFactory.cpp \
    src/bios/Bios.cpp \
    src/EntryPoint.cpp \
    src/logs/LogLevel.cpp \
    src/bios/BiosVector.cpp \
    src/bios/BiosIO.cpp \
    src/exceptions/IllegalStateException.cpp \
    src/bios/Patch.cpp

HEADERS  += \
    src/controller/Controller.hpp \
    src/exceptions/BiosNotReadableException.hpp \
    src/exceptions/BiosNotWriteableException.hpp \
    src/exceptions/Exception.hpp \
    src/logs/Log.hpp \
    src/logs/LogLevel.hpp \
    src/view/qt/MainWindow.hpp \
    src/view/Gui.hpp \
    src/view/GuiFactory.hpp \
    src/bios/Bios.hpp \
    src/bios/BiosVector.hpp \
    src/bios/BiosIO.hpp \
    src/exceptions/IllegalStateException.hpp \
    src/bios/Patch.hpp \
    src/bios/IBiosIO.hpp \
    src/bios/IPatch.hpp

FORMS    += mainwindow.ui
