#include "13_RomanToInteger.hpp"
#include "14_LongestCommonPrefix.hpp"
#include "20_ValidParentheses.hpp"
#include "35_SearchInsertPosition.hpp"
#include "69_sqrt.hpp"
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
TEST(ValidParentheses, test1) {
  Solution_20 solution;
  string str = "()[]{}";
  auto result = solution.isValid(str);
  EXPECT_TRUE(result);
}
TEST(SearchInsertPosition, test1) {
  Solution_35 solution;
  vector<int> in{1, 3, 5, 6};
  auto result = solution.searchInsert(in, 2);
  EXPECT_EQ(result, 1);
}
TEST(SearchInsertPosition, test2) {
  Solution_35 solution;
  vector<int> in{1, 3};
  auto result = solution.searchInsert(in, 2);
  EXPECT_EQ(result, 1);
}
TEST(Sqrt, test1) {
  Solution_69 solution;
  auto result = solution.mySqrt(8);
  EXPECT_EQ(result, 2);
}
TEST(Sqrt, test2) {
  Solution_69 solution;
  auto result = solution.mySqrt(9);
  EXPECT_EQ(result, 3);
}
}  // namespace test_leetcode
