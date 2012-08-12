SOURCES += \
    tester.cpp \
    ../src/Generators/genBoardCell.cpp \
    ../src/Generators/ExpansiveGenerator.cpp \
    ../src/Generators/NumberSelector.cpp \
    ../src/FencePacket/FencePacket.cpp

HEADERS += \
    ../src/Utils/UtilsTests.h \
    ../src/Generators/GeneratorsTests.h \
    ../src/FencePacket/FencePacketTests.h

INCLUDEPATH += ../src/Visualisation/ \
    ../src/Generators/ \
    ../src/FencePacket/ \
    ../src/Main/ \
    ../src/Utils/

QMAKE_CXXFLAGS += -std=c++11
