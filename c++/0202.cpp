#include <iostream>
#include <string>
#include <algorithm>

const int LIMIT = 1000000;

int
main(int argc, char* argv[]) {
	int i, j, n, x;
	int primes[LIMIT] = {0};
	int sums[LIMIT] = {0};

	// set primes
	primes[0] = 1;
	for (i = 2; i <= LIMIT/2; i++)
		for (j = 2; i*j <= LIMIT; j++)
			if (primes[i*j - 1] == 0)
				primes[i*j - 1] = 1;

	for ( ; ; ) {
		std::cin >> n >> x;
		if (n == 0 && x == 0)
			break;
		int *prices = new int(n);

		for (i = 0; i < n; i++) {
			std::cin >> prices[i];
			sums[prices[i] - 1] = 1;
		}

		for (i = 0; i < n; i++)
			for (j = 0; j < LIMIT; j++)
				if ((prices[i] + j + 1 <= LIMIT) && (sums[j]))
					sums[prices[i] + j] = 1;

		int max = 0;

		for (i = 0; i < x; i++)
			if (sums[i] && !primes[i])
				max = i + 1;

		if (max)
			std::cout << max << std::endl;
		else
			std::cout << "NA" << std::endl;
	}
	
	return 0;
}
