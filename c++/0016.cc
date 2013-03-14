#include <iostream>
#include <cmath>

#define EPS (10e-10)
#define PI 3.1415926535

using namespace std;

double radian(int angle) {
  return (double)angle * PI / 180.0;
}

int main() {
  int a, b, num, angle = 0;
  double x = 0, y = 0;
  char s;
  while (cin >> a >> s >> b) {
    if (a == 0 && b == 0) break;
    num = a;
    y += cos(radian(angle)) * num;
    x += sin(radian(angle)) * num;
    angle += b;
  }
  cout << (int)x << endl << (int)y << endl;
  return 0;
}
