#include <iostream>

using namespace std;

int main()
{
	int n, s, sum;
	while (!cin.eof())
	{
		cin >> n;
		if (n == 0) break;
		int max = 0, min = 500;
		for (int i = 0; i < n; i++)
		{
			sum = 0;
			for (int j = 0; j < 5; j++)
			{
				cin >> s;
				sum += s;
			}
			if (max < sum) max = sum;
			if (min > sum) min = sum;
		}
		cout << max << " " << min << endl;
	}
	return 0;
}
