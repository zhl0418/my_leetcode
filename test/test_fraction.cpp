#include "gtest/gtest.h"
#include "fraction.h"

namespace test_fraction {
  class test_fraction : public ::testing::Test {
  protected:
    // You can remove any or all of the following functions if its body
    // is empty.

    test_fraction() {
      // You can do set-up work for each test here.
    }

    virtual ~test_fraction() {
      // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    virtual void SetUp() {
      // Code here will be called immediately after the constructor (right
      // before each test).
    }

    virtual void TearDown() {
      // Code here will be called immediately after each test (right
      // before the destructor).
    }
  };

  TEST_F(test_fraction, commonDivisor) {
    int result = commonDivisor(12, 18);
    EXPECT_EQ(result, 6);
  }
}
