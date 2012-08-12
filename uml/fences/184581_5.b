class TestFencePacket
!!!224261.cpp!!!	setUp() : void
pTestObj = new FencePacket::FencePacket();
!!!224389.cpp!!!	tearDown() : void
delete pTestObj;
!!!224517.cpp!!!	testSetNumberBoardSize() : void

	TS_WARN("Test testSetNumberBoardSize() not implemented");
!!!224645.cpp!!!	testGetFencePointCount() : void

	TS_WARN("Test testGetFencePointCount() not implemented");
!!!224773.cpp!!!	testGetFenceNumberXY() : void

	TS_WARN("Test testGetFenceNumberXY() not implemented");
!!!224901.cpp!!!	testSetFenceNumber() : void

	TS_WARN("Test testSetFenceNumber() not implemented");
!!!225029.cpp!!!	testGetNumberBoardSize() : void

	TS_WARN("Test testGetNumberBoardSize() not implemented");
!!!225157.cpp!!!	testAppendFencePoint() : void

	TS_WARN("Test testAppendFencePoint() not implemented");
!!!225285.cpp!!!	testGetFencePoint() : void

	TS_WARN("Test testGetFencePoint() not implemented");
!!!224261.cpp!!!	setUp() : void
  pTestObj = new FencePack::FencePacket();
!!!224389.cpp!!!	tearDown() : void
  delete pTestObj;
!!!224517.cpp!!!	testSetNumberBoardSize() : void
  
  	TS_WARN("Test testSetNumberBoardSize() not implemented");
!!!224645.cpp!!!	testGetFencePointCount() : void
    for(int i = 0; i < 10; i++)
    {
        Utils::Point2D NewPoint(i, 2*i);
        pTestObj->appendFencePoint(NewPoint);
    }

    TS_ASSERT_EQUALS(pTestObj->getFencePointCount(), 10);

!!!224773.cpp!!!	testGetFenceNumberXY() : void
    pTestObj->setNumberBoardSize(10, 5);

    pTestObj->setFenceNumber(4, 2, 125);
    TS_ASSERT_EQUALS(pTestObj->getFenceNumberXY(4, 2), 125);

    pTestObj->setFenceNumber(9, 4, 1225);
    TS_ASSERT_EQUALS(pTestObj->getFenceNumberXY(9, 4), 1225);
!!!224901.cpp!!!	testSetFenceNumber() : void
  
  	TS_WARN("Test testSetFenceNumber() not implemented");
!!!225029.cpp!!!	testGetNumberBoardSize() : void
    pTestObj->setNumberBoardSize(10, 5);
  
    unsigned int rows, cols;
    pTestObj->getNumberBoardSize(rows, cols);

    TS_ASSERT_EQUALS(rows, 10);
    TS_ASSERT_EQUALS(cols, 10);
!!!225157.cpp!!!	testAppendFencePoint() : void
  
  	TS_WARN("Test testAppendFencePoint() not implemented");
!!!225285.cpp!!!	testGetFencePoint() : void
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
