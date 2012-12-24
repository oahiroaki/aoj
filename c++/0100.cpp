#include <iostream>
#include <map>
#include <algorithm>
#include <string>

const long long BORDER = 1000000;

using namespace std;

int main() {
	bool f;
	int i, j, n, number;
	long long price, amount;
	while(cin >> n) {
		string str = "NA";
		if (n == 0) break;

		map<int, long long> m;
		map<int, long long>::iterator it;

		for (i = 0; i < n; i++) {
			cin >> number >> price >> amount;
			it = m.find(number);
			if (it != m.end())
				it->second += price * amount;
			else
				m.insert(pair<int, long long>(number, price * amount));
		}
		for (it = m.begin(); it != m.end(); it++) {
			if (it->second >= BORDER) ss.str("");
				os << it->first;
		}
		cout <<  << endl;
	}

	return 0;
}
