
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution_14 {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    string pre = "";
    for (int i = 0; i < strs[0].size(); i++) {
      for (int j = 1; j < strs.size(); j++) {
        if (i == strs[j].size() || strs[0][i] != strs[j][i]) {
          return pre;
        }
      }
      pre.push_back(strs[0][i]);
    }
    return pre;
  }
  string commonPrefix(string &l, string& r) {
    auto len = min(l.size(), r.size());
    for (int i = 0; i < len; i++) {
      if (l[i] != r[i]) return l.substr(0, i);
    }
    return l.substr(0, len);
  }
  string longestCommonPrefix(vector<string>& strs, int l, int r) {
    if (l == r) return strs[l];
    int mid = (l + r) / 2;
    auto left = longestCommonPrefix(strs, l, mid);
    auto right = longestCommonPrefix(strs, mid + 1, r);

    return commonPrefix(left, right);
  }
  string longestCommonPrefix2(vector<string>& strs) {
    if (strs.size() == 0) return "";
    return longestCommonPrefix(strs, 0, strs.size() - 1);
  }
};