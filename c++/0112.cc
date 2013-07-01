#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int i, n, t;

	while (1) {
		std::cin >> n;

		if (n == 0) break;

		std::vector<int> data;

		for (i = 0; i < n; i++) {
			std::cin >> t;
			data.push_back(t);
		}

		std::sort(data.begin(), data.end());
		
		long long sum, result;
		for (i = 0, sum = 0, result = 0; i < n; i++) {
			result += sum;
			sum += (long long)data[i];
		}

		std::cout << result << std::endl;
	}

	return 0;
}
