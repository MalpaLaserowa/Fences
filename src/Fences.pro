#-------------------------------------------------
#
# Project created by QtCreator 2012-07-26T21:11:13
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Fences
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    Visualisation/GraphicalPlot.cpp \
    Visualisation/TextPlot.cpp \
    Generators/genBoardCell.cpp \
    Generators/ExpansiveGenerator.cpp \
    Generators/NumberSelector.cpp \
    FencePacket/FencePacket.cpp \
    Main/FencePuzzle.cpp

HEADERS += \
    Visualisation/GraphicalPlot.h \
    Visualisation/TextPlot.h \
    Visualisation/IFenceDrawPacket.h \
    Generators/IFenceGenPacket.h \
    Generators/genBoardCell.h \
    Generators/genFencePoint.h \
    Generators/ExpansiveGenerator.h \
    Generators/NumberSelector.h \
    FencePacket/FencePacket.h \
    Main/IFenceGenerator.h \
    Main/IFenceNumberSelector.h \
    Main/IFenceVisualisation.h \
    Main/FencePuzzle.h \
    Utils/direction_4.h \
    Utils/LinkedList.h \
    Utils/Vector2D.h \
    Visualisation/TextScreenCell.h \
    Utils/SharedPtr.h \
    Utils/Point2D.h

INCLUDEPATH += Visualisation/ \
    Generators/ \
    FencePacket/ \
    Main/ \
    Utils/

QMAKE_CXXFLAGS += -std=c++11
