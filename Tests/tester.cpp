/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "../src/Utils/UtilsTests.h"

static TestVector2D suite_TestVector2D;

static CxxTest::List Tests_TestVector2D = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVector2D( "../src/Utils/UtilsTests.h", 33, "TestVector2D", suite_TestVector2D, Tests_TestVector2D );

static class TestDescription_TestVector2D_testVector2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVector2D_testVector2D() : CxxTest::RealTestDescription( Tests_TestVector2D, suiteDescription_TestVector2D, 41, "testVector2D" ) {}
 void runTest() { suite_TestVector2D.testVector2D(); }
} testDescription_TestVector2D_testVector2D;

static class TestDescription_TestVector2D_testOperatorSubscript : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVector2D_testOperatorSubscript() : CxxTest::RealTestDescription( Tests_TestVector2D, suiteDescription_TestVector2D, 43, "testOperatorSubscript" ) {}
 void runTest() { suite_TestVector2D.testOperatorSubscript(); }
} testDescription_TestVector2D_testOperatorSubscript;

static class TestDescription_TestVector2D_testResize : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVector2D_testResize() : CxxTest::RealTestDescription( Tests_TestVector2D, suiteDescription_TestVector2D, 45, "testResize" ) {}
 void runTest() { suite_TestVector2D.testResize(); }
} testDescription_TestVector2D_testResize;

#include "../src/Generators/GeneratorsTests.h"

static TestgenBoardCell suite_TestgenBoardCell;

static CxxTest::List Tests_TestgenBoardCell = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestgenBoardCell( "../src/Generators/GeneratorsTests.h", 12, "TestgenBoardCell", suite_TestgenBoardCell, Tests_TestgenBoardCell );

static class TestDescription_TestgenBoardCell_testTriggerSideRails : public CxxTest::RealTestDescription {
public:
 TestDescription_TestgenBoardCell_testTriggerSideRails() : CxxTest::RealTestDescription( Tests_TestgenBoardCell, suiteDescription_TestgenBoardCell, 20, "testTriggerSideRails" ) {}
 void runTest() { suite_TestgenBoardCell.testTriggerSideRails(); }
} testDescription_TestgenBoardCell_testTriggerSideRails;

static TestExpansiveGenerator suite_TestExpansiveGenerator;

static CxxTest::List Tests_TestExpansiveGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestExpansiveGenerator( "../src/Generators/GeneratorsTests.h", 65, "TestExpansiveGenerator", suite_TestExpansiveGenerator, Tests_TestExpansiveGenerator );

static class TestDescription_TestExpansiveGenerator_testGenerateFenceAndNumbers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExpansiveGenerator_testGenerateFenceAndNumbers() : CxxTest::RealTestDescription( Tests_TestExpansiveGenerator, suiteDescription_TestExpansiveGenerator, 73, "testGenerateFenceAndNumbers" ) {}
 void runTest() { suite_TestExpansiveGenerator.testGenerateFenceAndNumbers(); }
} testDescription_TestExpansiveGenerator_testGenerateFenceAndNumbers;

static TestNumberSelector suite_TestNumberSelector;

static CxxTest::List Tests_TestNumberSelector = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNumberSelector( "../src/Generators/GeneratorsTests.h", 96, "TestNumberSelector", suite_TestNumberSelector, Tests_TestNumberSelector );

static class TestDescription_TestNumberSelector_testSelectNumbersToPrint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNumberSelector_testSelectNumbersToPrint() : CxxTest::RealTestDescription( Tests_TestNumberSelector, suiteDescription_TestNumberSelector, 104, "testSelectNumbersToPrint" ) {}
 void runTest() { suite_TestNumberSelector.testSelectNumbersToPrint(); }
} testDescription_TestNumberSelector_testSelectNumbersToPrint;

#include <cxxtest/Root.cpp>
