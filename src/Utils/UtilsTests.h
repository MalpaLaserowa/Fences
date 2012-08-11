#ifndef UTILS_UTILSTESTS_H
#define UTILS_UTILSTESTS_H


#include <cxxtest/TestSuite.h>
#include "direction_4.h"
#include "LinkedList.h"
#include "Vector2D.h"



CXXTEST_ENUM_TRAITS( direction_4,
	CXXTEST_ENUM_MEMBER( UP )
	CXXTEST_ENUM_MEMBER( RIGHT )
	CXXTEST_ENUM_MEMBER( DOWN )
	CXXTEST_ENUM_MEMBER( LEFT )
);
class TestLinkedList : public CxxTest::TestSuite {
  public:
    Utils::LinkedList* pTestObj;

    inline void setUp();

    inline void tearDown();

};

inline void TestLinkedList::setUp() {
  // Bouml preserved body begin 0002A485
  pTestObj = new Utils::LinkedList<int>();
  // Bouml preserved body end 0002A485
}

inline void TestLinkedList::tearDown() {
  // Bouml preserved body begin 0002A505
  delete pTestObj;
  // Bouml preserved body end 0002A505
}

class TestVector2D : public CxxTest::TestSuite {
  public:
    Utils::Vector2D* pTestObj;

    inline void setUp();

    inline void tearDown();

    inline void testVector2D();

    inline void testOperatorSubscript();

    inline void testResize();

};

inline void TestVector2D::setUp() {
  // Bouml preserved body begin 0002A685
  pTestObj = new Utils::Vector2D<int>();
  // Bouml preserved body end 0002A685
}

inline void TestVector2D::tearDown() {
  // Bouml preserved body begin 0002A705
  delete pTestObj;
  // Bouml preserved body end 0002A705
}

inline void TestVector2D::testVector2D() {
  // Bouml preserved body begin 0002A785
  
    //TS_WARN("Test testVector2D() not implemented");
  // Bouml preserved body end 0002A785
}

inline void TestVector2D::testOperatorSubscript() {
  // Bouml preserved body begin 0002A805
  
    //TS_WARN("Test testOperatorSubscript() not implemented");
  // Bouml preserved body end 0002A805
}

inline void TestVector2D::testResize() {
  // Bouml preserved body begin 0002A885

    pTestObj->resize(5, 2);

    (*pTestObj)[4][1] = 12;
    TS_ASSERT_EQUALS((*pTestObj)[4][1], 12);

    (*pTestObj)[0][1] = 8;
    TS_ASSERT_EQUALS((*pTestObj)[0][1], 8);

    unsigned int rows, colls;

    pTestObj->size(rows, colls);
    TS_ASSERT_EQUALS(rows, 5);
    TS_ASSERT_EQUALS(colls, 2);

  // Bouml preserved body end 0002A885
}


#endif
