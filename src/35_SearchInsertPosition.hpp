
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution_35 {
 public:
  int searchInsert(vector<int>& nums, int target) {
    if (nums.size() == 1) {
      if (target > nums[0])
        return 1;
      else
        return 0;
    }
    int h = 0;
    int t = nums.size() - 1;
    int i;
    while (h < t) {
      if (target <= nums[h]) return h;
      if (target == nums[t]) return t;
      if (target > nums[t]) return t + 1;
      i = (h + t) / 2;
      if (target == nums[i]) return i;
      if (target > nums[i]) {
        h = i + 1;
      } else {
        t = i - 1;
      }
    }
    if (target > nums[h]) return h + 1;
    return h;
  }
};