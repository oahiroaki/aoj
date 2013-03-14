#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

string a, b, c;

string replaceX(string s, char n) {
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'X') s[i] = n;
	}
	return s;
}

bool check(char n) {
	string s, t, r;
	strcpy(s, a);
	strcpy(t, b);
	strcpy(r, c);
	int t1, t2, t3;
	t1 = atoi(s);
	t2 = atoi(t);
	t3 = atoi(r);
	cout << t1 << t2 << t3 << endl;
	if(t1 + t2 == t3) return true;
	else return false;
}

int main() {
	char buf[128], t;
	string nums = "0123456789";

	while(cin >> buf) {
		t = "";
		for(int i = 0; i < buf.length(); i++) {
			if(buf[i] == '+') {
				a = t; t = "";
			}
			else if(buf[i] == '=') {
				b = t; t = "";
			}
			else {
				t += buf[i];
			}
		}
		c = t;

		bool flag = false;

		for(int i = 0; i < nums.length(); i++) {
			if(check(nums[i])) {
				flag = true;
				cout << i << endl;
			}
		}
		if(!flag) cout << "NA" << endl;
	}
	return 0;
}
