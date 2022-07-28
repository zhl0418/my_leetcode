#ifndef SRC_1TWOSUM
#define SRC_1TWOSUM
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, vector<int> > lst;
    for (int i = 0; i < nums.size(); i++) {
      lst[nums[i]].push_back(i);
    }
    vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
      int rest = target - nums[i];
      if (lst.find(rest) != lst.end()) {
        if (lst[rest][0] != i) {
          result.push_back(i);
          result.push_back(lst[rest][0]);
          return result;
        } else if (lst[rest].size() > 1) {
          result.push_back(i);
          result.push_back(lst[rest][1]);
          return result;
        }
      }
    }
    return result;
  }
};

#endif /* SRC_1TWOSUM */
