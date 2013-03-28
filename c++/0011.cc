#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int w, n, t, a, b, i;
	char c;
	cin >> w;
	vector<int> state(w);
	for (i = 1; i <= w; i++) state[i-1] = i;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a >> c >> b;
		t = state[a-1];
		state[a-1] = state[b-1];
		state[b-1] = t;
	}
	for (i = 0; i < w; i++) cout << state[i] << endl;
	return 0;
}
