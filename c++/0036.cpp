#include <iostream>

#define rep(i,n) for(int i=0; i<n; i++)

using namespace std;

int main() {
	char a, c;
	int map[10][10];

	while(cin >> c) {
		if(c == '0' || c== '1') {
			rep(i,10)rep(j,10)
				map[i][j] = 0;

			rep(i,8)rep(j,8) {
				if(!(i + j == 0)) cin >> c;
				map[i][j] = (int)(c - '0');
			}

			rep(i,8)rep(j,8) {
				if(map[i][j]) {
					if(map[i][j+2])   a = 'C';
					if(map[i+2][j])   a = 'B';
					if(map[i+1][j+1]) a = 'A';
					if(map[i+1][j-1]) a = 'G';
					if(map[i+1][j+2]) a = 'E';
					if(map[i+2][j+1]) a = 'F';
					if(map[i+2][j-1]) a = 'D';
					break;
				}
			}

			cout << a << endl;
		}
	}

	return 0;
}
