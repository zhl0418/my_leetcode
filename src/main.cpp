#include <cstdlib>
#include <iostream>
#include <string>

#include "1_TwoSum.hpp"

using namespace std;

int main() {
  string input;

  while (cin >> input) {
    if (!input.compare("exit")) return (EXIT_SUCCESS);
  }
  cout << "Exit code" << endl;
  return (EXIT_FAILURE);
}
