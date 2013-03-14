#include <iostream>

using namespace std;

int main() {
  int d, sum;
  while (cin >> d) {
    sum = 0;
    for (int i = 1; d * i <= 600 - d; i++) {
      sum += d * (d * i) * (d * i);
    }
    cout << sum << endl;
  }
  return 0;
}
