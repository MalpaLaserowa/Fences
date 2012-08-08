SOURCES += \
    tester.cpp \
    ../src/Generators/genBoardCell.cpp \
    ../src/Generators/ExpansiveGenerator.cpp \
    ../src/Generators/NumberSelector.cpp

HEADERS += \
    ../src/Utils/UtilsTests.h \
    ../src/Generators/GeneratorsTests.h

INCLUDEPATH += ../src/Visualisation/ \
    ../src/Generators/ \
    ../src/FencePacket/ \
    ../src/Main/ \
    ../src/Utils/
