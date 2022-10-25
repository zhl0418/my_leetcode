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
    if (x == 1) return 1;
    double a = x / 2;
    while (true) {
      double tmp = a;
      if (abs(a) < 1e-5) return 0;
      a = a - (a * a - x) / (2 * a);
      if ((int)a == (int)tmp) break;
    }
    return (int)a;
  }
};

#endif /* SRC_69_SQRT */
