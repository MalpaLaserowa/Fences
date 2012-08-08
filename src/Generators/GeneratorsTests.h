#ifndef GENERATORS_GENERATORSTESTS_H
#define GENERATORS_GENERATORSTESTS_H


#include <cxxtest/TestSuite.h>
#include "genBoardCell.h"
#include "genFencePoint.h"
#include "ExpansiveGenerator.h"
#include "NumberSelector.h"


class TestgenBoardCell : public CxxTest::TestSuite {
  public:
    Generators::genBoardCell* pTestObj;

    inline void setUp();

    inline void tearDown();

    inline void testTriggerSideRails();

};

inline void TestgenBoardCell::setUp() {
  // Bouml preserved body begin 00026C85
  pTestObj = new Generators::genBoardCell();
  // Bouml preserved body end 00026C85
}

inline void TestgenBoardCell::tearDown() {
  // Bouml preserved body begin 00026D05
  delete pTestObj;
  // Bouml preserved body end 00026D05
}

inline void TestgenBoardCell::testTriggerSideRails() {
  // Bouml preserved body begin 00026D85
  
  	TS_WARN("Test testTriggerSideRails() not implemented");
  // Bouml preserved body end 00026D85
}

class TestgenFencePoint : public CxxTest::TestSuite {
  public:
    Generators::genFencePoint* pTestObj;

    inline void setUp();

    inline void tearDown();

};

inline void TestgenFencePoint::setUp() {
  // Bouml preserved body begin 00026E05
  pTestObj = new Generators::genFencePoint();
  // Bouml preserved body end 00026E05
}

inline void TestgenFencePoint::tearDown() {
  // Bouml preserved body begin 00026E85
  delete pTestObj;
  // Bouml preserved body end 00026E85
}

class TestExpansiveGenerator : public CxxTest::TestSuite {
  public:
    Generators::ExpansiveGenerator* pTestObj;

    inline void setUp();

    inline void tearDown();

    inline void testGenerateFenceAndNumbers();

};

inline void TestExpansiveGenerator::setUp() {
  // Bouml preserved body begin 00026F05
  pTestObj = new Generators::ExpansiveGenerator();
  // Bouml preserved body end 00026F05
}

inline void TestExpansiveGenerator::tearDown() {
  // Bouml preserved body begin 00026F85
  delete pTestObj;
  // Bouml preserved body end 00026F85
}

inline void TestExpansiveGenerator::testGenerateFenceAndNumbers() {
  // Bouml preserved body begin 00027005
  
  	TS_WARN("Test testGenerateFenceAndNumbers() not implemented");
  // Bouml preserved body end 00027005
}

class TestNumberSelector : public CxxTest::TestSuite {
  public:
    Generators::NumberSelector* pTestObj;

    inline void setUp();

    inline void tearDown();

    inline void testSelectNumbersToPrint();

};

inline void TestNumberSelector::setUp() {
  // Bouml preserved body begin 00027085
  pTestObj = new Generators::NumberSelector();
  // Bouml preserved body end 00027085
}

inline void TestNumberSelector::tearDown() {
  // Bouml preserved body begin 00027105
  delete pTestObj;
  // Bouml preserved body end 00027105
}

inline void TestNumberSelector::testSelectNumbersToPrint() {
  // Bouml preserved body begin 00027185
  
  	TS_WARN("Test testSelectNumbersToPrint() not implemented");
  // Bouml preserved body end 00027185
}


#endif
