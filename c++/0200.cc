#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a, b, time, cost, querys;
	int i, j, k, p, q, r, n, m;
	int times[100][100], costs[100][100];

	while (true) {
		cin >> n >> m;
		if (!n && !m)
			break;

		for (i = 0; i < m; i++) {
			for (j = 0; j < m; j++) {
				times[i][j] = (i == j) ? 0 : 1e6;
				costs[j][i] = (i == j) ? 0 : 1e6;
			}
		}

		for (i = 0; i < n; i++) {
			cin >> a >> b >> cost >> time;
			times[a - 1][b - 1] = time;
			times[b - 1][a - 1] = time;
			costs[a - 1][b - 1] = cost;
			costs[b - 1][a - 1] = cost;
		}

		for (k = 0; k < m; k++) {
			for (i = 0; i < m; i++) {
				for (j = 0; j < m; j++) {
					times[i][j] = min(times[i][j], times[i][k] + times[k][j]);
					costs[i][j] = min(costs[i][j], costs[i][k] + costs[k][j]);
				}
			}
		}

		cin >> querys;
		for (i = 0; i < querys; i++) {
			cin >> p >> q >> r;
			cout << (r ? times[p - 1][q - 1] : costs[p - 1][q - 1]) << endl;
		}
	}
	return 0;
}
