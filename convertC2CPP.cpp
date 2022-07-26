//   Convert this program to C++
//  change to C++ io
//  change to one line comments
//  change defines of constants to const
//  change array to vector<>
//  inline any short function

#include <iostream>
#include <vector>

using namespace std;

const int N = 40;

template <typename summable>
// summable is generic type
inline summable sum(const vector<summable> &data, summable s) {
  for (int i = 0; i < data.size(); ++i) s += data[i];
  return s;
}
int main() {
  vector<int> data(N, 0);

  for (int i = 0; i < N; ++i) data[i] = i;

  cout << "sum is " << sum(data, 0) << endl;
  return 0;
}
