#include <iostream>

using namespace std;

const int w[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

int main(){
  int n;
  while (cin >> n) {
    for (int i = 0; n > 0; i++) {
      if (n % 2)
        (n < 2) ? cout << w[i] << endl : cout << w[i] << " ";
      n = n / 2;
    }
  }
  return 0;
}
