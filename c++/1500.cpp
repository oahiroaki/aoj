#include <iostream>
#include <vector>
#include <string>

using namespace std;

int addition(int sum, int num, int index)
{
	int temp = num;
	if (index % 2 == 0)
	{
		num *= 2;
		temp = (num >= 10) ? num / 10 + num % 10 : num;
	}
	return sum + temp;
}

int calc_sum(string id, int index, int sum)
{
	if (id[i] == '*')
	{
		for (int i = 0)
	}
		else
		{
			sum = addition(sum, (int) id[i] - '0', i + 1);
		}
	}
	return sum;
}

int main()
{
	cout << calc_sum("53798");
	return 0;
}


