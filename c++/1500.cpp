#include <iostream>
#include <string>

using namespace std;

int calc(int num, int idx)
{
	if (idx % 2)
		return num;
	num *= 2;
	if (num >= 10)
		num -= 9;
	return num;
}

int main()
{
	int n, m;
	string id;
	cin >> n >> id >> m;
	int *a = new int(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	long long map[2][10];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 10; j++)
			map[i][j] = 0;
	int sw = 1;
	map[0][0] = 1;
	for (int i = n - 1; i >= 0; i--, sw = 1 - sw) {
		for (int j = 0; j < 10; j++) {
			map[sw][j] = 0;
		}
		int x;
		if (id[i] == '*') {
			for (int j = 0; j < 10; j++) {
				for (int k = 0; k < m; k++) {
					x = calc(a[k], i);
					map[sw][(j + x) % 10] += map[1 - sw][j];
				}
			}
		} else {
			x = calc(id[i] - '0', i);
			for (int j = 0; j < 10; j++) {
				map[sw][(j + x) % 10] += map[1 - sw][j];
			}
		}
	}
	cout << map[1 - sw][0] << endl;
	return 0;
}
