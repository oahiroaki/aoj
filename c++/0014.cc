#include <iostream>

using namespace std;

int main()
{
	int i, d, sum;
	while (cin >> d) {
		sum = 0;
		for (i = 1; d * i <= 600 - d; i++) sum += d * (d * i) * (d * i);
		cout << sum << endl;
	}
	return 0;
}
