#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (islower(str[i])) str[i] -= 32;
	}
	cout << str <<endl;
	return 0;
}
