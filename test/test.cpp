#include "9PalindromeNumber.hpp"
#include "gtest/gtest.h"

namespace test_leetcode {

TEST(isPalindrome, test1) {
  Solution solution;
  auto result = solution.isPalindrome(121);
  EXPECT_EQ(result, true);
}
TEST(isPalindrome, test2) {
  Solution solution;
  auto result = solution.isPalindrome(-121);
  EXPECT_EQ(result, false);
}
}  // namespace test_leetcode
