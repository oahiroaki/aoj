#include <stdio.h>

using namespace std;

int main()
{
	int i, j;
	int data[12];
	double distance = 0.0;
	double v1, v2, time;
	int sum;

	for (i = 0; i < 12; i++) {
		cin >> data[i];

		if (i < 10)
			distance += data[i];
		else if (i == 10)
			v1 = data[i];
		else
			v2 = data[i];
		time = distance / (v1 * v2);

		for (j = sum = 0; j < 10; j++) {
			sum += data[j];
			if (sum > (int)(v1 * time)) {
				cout << j << endl;
			}
		}

	}
	return 0;
}
