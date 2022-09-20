#include <stack>

using namespace std;

class Solution_20 {
 public:
  bool isValid(string s) {
    stack<char> check;

    for (auto &i : s) {
      if (i == '(' || i == '[' || i == '{') {
        check.push(i);
      } else if (check.size()==0) {
        return false;
      } else if (i == ')') {
        if (check.top() == '(') {
          check.pop();
        } else {
          return false;
        }
      } else if (i == ']') {
        if (check.top() == '[') {
          check.pop();
        } else {
          return false;
        }
      } else if (i == '}') {
        if (check.top() == '{') {
          check.pop();
        } else {
          return false;
        }
      }
    }
    if (check.size() > 0) {
      return false;
    }
    return true;
  }
};