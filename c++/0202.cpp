#include<iostream>

using namespace std;

const int LIMIT = 1000001;

int main(){
  bool primes[N] = {true};
  bool sums[N] = {true};

  // init primes
  primes[0] = false;
  primes[1] = false;
  for (int i = 2; i < LIMIT / 2; i++) {
    if (primes[i]) {
      for (int j = 2 * i; j < LIMIT; j += i) {
        primes[j] = false;
      }
    }
  }

input:
  while (cin >> n >> x && n) {
    int *prices = new int(n);

    for (int i = 0; i < n; i++) {
      cin >> prices[i];
      sums[i] = false;
    }

    // init sums
    for (int i = 0; i < LIMIT; i++) {
      if (!sums[i]) {
        for (int j = 0; j < LIMIT; j++) {
          sums[i + prices[j]] = false;
        }
      }
    }

    delete [] prices;

    for(int i = LIMIT - 1; i > 0; i--){
      if (primes[i] && sums[i]) {
        cout << i << endl;
        goto input;
      }
    }
    cout << "NA" << endl;
  }
  return 0;
}
