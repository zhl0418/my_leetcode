#ifndef SRC_69_SQRT
#define SRC_69_SQRT
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution_69 {
 public:
  int mySqrt(int x) {
    // Newton Raphson Methode
    double a = x / 2;
    while (true) {
      double tmp = a;
      a = a - (a * a - x) / (2 * a);
      if ((int)a == (int)tmp) break;
    }
    return (int)a;
  }
};

#endif /* SRC_69_SQRT */
