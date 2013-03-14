#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  vector<int> train;

  while (cin >> n) {
    if (n) {
      train.push_back(n);
    }
    else {
      cout << train.back() << endl;
      train.pop_back();
    }
  }
  return 0;
}
