#include "13_RomanToInteger.hpp"
#include "14_LongestCommonPrefix.hpp"
#include "9_PalindromeNumber.hpp"
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
TEST(RomanToInteger, test1) {
  Solution13 solution;
  auto result = solution.romanToInt("MCMXCIV");
  EXPECT_EQ(result, 1994);
}
TEST(RomanToInteger, test2) {
  Solution13 solution;
  auto result = solution.romanToInt("LVIII");
  EXPECT_EQ(result, 58);
}
TEST(LongestCommonPrefix, test1) {
  Solution_14 solution;
  vector<string> str = {"flower", "flow", "flight"};
  auto result = solution.longestCommonPrefix(str);
  EXPECT_FALSE(result.compare("fl"));
}
TEST(LongestCommonPrefix, test2) {
  Solution_14 solution;
  vector<string> str = {"flower", "flow", "flight"};
  auto result = solution.longestCommonPrefix2(str);
  EXPECT_FALSE(result.compare("fl"));
}
}  // namespace test_leetcode
