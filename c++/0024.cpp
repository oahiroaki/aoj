#include <iostream>
#include <cmath>
#define EPS (1e-10)
using namespace std;

int main() {
  int n;
  double v, h;
  double g = 9.8;
  while (cin >> v) {
    h = (v * v) / (2 * g);
    n = (int)ceil((h + 5) / 5 + EPS);
    cout << n << endl;
  }
  return 0;
}
