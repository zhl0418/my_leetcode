
#include <iostream>

using namespace std;
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

class Solution13 {
 public:
  int romanToInt(string s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'M') {
        sum += 1000;
      } else if (s[i] == 'D') {
        sum += 500;
      } else if (s[i] == 'C') {
        if (i + 1 < s.size() && s[i + 1] == 'M') {
          sum += 900;
          i++;
        } else if (i + 1 < s.size() && s[i + 1] == 'D') {
          sum += 400;
          i++;
        } else {
          sum += 100;
        }
      } else if (s[i] == 'L') {
        sum += 50;
      } else if (s[i] == 'X') {
        if (i + 1 < s.size() && s[i + 1] == 'C') {
          sum += 90;
          i++;
        } else if (i + 1 < s.size() && s[i + 1] == 'L') {
          sum += 40;
          i++;
        } else {
          sum += 10;
        }
      } else if (s[i] == 'V') {
        sum += 5;
      } else if (s[i] == 'I') {
        if (i + 1 < s.size() && s[i + 1] == 'X') {
          sum += 9;
          i++;
        } else if (i + 1 < s.size() && s[i + 1] == 'V') {
          sum += 4;
          i++;
        } else {
          sum++;
        }
      }
    }
    return sum;
  }
};