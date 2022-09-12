#include "9_PalindromeNumber.hpp"
#include "13_RomanToInteger.hpp"
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
TEST(RomanToInteger, test1){
  Solution13 solution;
  auto result =solution.romanToInt("MCMXCIV");
  EXPECT_EQ(result,1994);
}
TEST(RomanToInteger, test2){
  Solution13 solution;
  auto result =solution.romanToInt("LVIII");
  EXPECT_EQ(result,58);
}
}  // namespace test_leetcode
