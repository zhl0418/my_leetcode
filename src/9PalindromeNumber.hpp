//回文
#include <iostream>
#include <string>
class Solution {
 public:
  bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x < 10) return true;
    auto a_st = std::to_string(x);
    for (int i = 0; i < a_st.size() / 2 + 1; i++) {
      if (a_st[i] != a_st[a_st.size() - 1 - i]) {
        return false;
      }
    }
    return true;
  }
};