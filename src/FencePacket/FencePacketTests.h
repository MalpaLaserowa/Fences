#ifndef FENCEPACK_FENCEPACKETTESTS_H
#define FENCEPACK_FENCEPACKETTESTS_H


#include <cxxtest/TestSuite.h>
#include "FencePacket.h"


class TestFencePacket : public CxxTest::TestSuite {
  public:
    FencePack::FencePacket* pTestObj;

    inline void setUp();

    inline void tearDown();

    inline void testGetFencePointCount();

    inline void testGetFenceNumberXY();

    inline void testGetNumberBoardSize();

    inline void testGetFencePoint();

};

inline void TestFencePacket::setUp() {
  // Bouml preserved body begin 00036C05
  pTestObj = new FencePack::FencePacket();
  // Bouml preserved body end 00036C05
}

inline void TestFencePacket::tearDown() {
  // Bouml preserved body begin 00036C85
  delete pTestObj;
  // Bouml preserved body end 00036C85
}

inline void TestFencePacket::testGetFencePointCount() {
  // Bouml preserved body begin 00036D85
    for(int i = 0; i < 10; i++)
    {
        Utils::Point2D NewPoint(i, 2*i);
        pTestObj->appendFencePoint(NewPoint);
    }

    TS_ASSERT_EQUALS(pTestObj->getFencePointCount(), 10);

  // Bouml preserved body end 00036D85
}

inline void TestFencePacket::testGetFenceNumberXY() {
  // Bouml preserved body begin 00036E05
    pTestObj->setNumberBoardSize(10, 5);

    pTestObj->setFenceNumber(4, 2, 125);
    TS_ASSERT_EQUALS(pTestObj->getFenceNumberXY(4, 2), 125);

    pTestObj->setFenceNumber(9, 4, 1225);
    TS_ASSERT_EQUALS(pTestObj->getFenceNumberXY(9, 4), 1225);
  // Bouml preserved body end 00036E05
}

inline void TestFencePacket::testGetNumberBoardSize() {
  // Bouml preserved body begin 00036F05
    pTestObj->setNumberBoardSize(10, 5);
  
    unsigned int rows, cols;
    pTestObj->getNumberBoardSize(rows, cols);

    TS_ASSERT_EQUALS(rows, 10);
    TS_ASSERT_EQUALS(cols, 5);
  // Bouml preserved body end 00036F05
}

inline void TestFencePacket::testGetFencePoint() {
  // Bouml preserved body begin 00037005
    for(int i = 0; i < 10; i++)
    {
        Utils::Point2D NewPoint(i, 2*i);
        pTestObj->appendFencePoint(NewPoint);
    }

    for(int i = 0; i < 10; i++)
    {
        Utils::Point2D result(pTestObj->getFencePoint(i));
        Utils::Point2D expected(i, 2*i);

        TS_ASSERT_EQUALS(result,expected)
    }
  // Bouml preserved body end 00037005
}


#endif
