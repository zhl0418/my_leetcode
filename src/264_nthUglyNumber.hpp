#ifndef SRC_264_NTHUGLYNUMBER
#define SRC_264_NTHUGLYNUMBER
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution_264 {
 public:
  int min3(int x1, int x2, int x3) {
    int min = x1 < x2 ? x1 : x2;
    return min < x3 ? min : x3;
  }
  int nthUglyNumber(int n) {
    if (n == 1) return 1;
    vector<int> nums;
    nums.push_back(1);
    int i2 = 0;
    int i3 = 0;
    int i5 = 0;

    while (nums.size() < n) {
      int min = min3(nums[i2] * 2, nums[i3] * 3, nums[i5] * 5);
      if (min == nums[i2] * 2) i2++;
      if (min == nums[i3] * 3) i3++;
      if (min == nums[i5] * 5) i5++;
      nums.push_back(min);
    }
    return nums.back();
  }
};

#endif /* SRC_264_NTHUGLYNUMBER */
