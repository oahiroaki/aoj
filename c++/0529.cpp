#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, m;

	while(true) {
		cin >> n >> m;
		if(n == 0) break;
		int *nums = new int[n+1];
		int *sums = new int[2*(n+1)];
		for(int i = 0; i < n; i++) {
			cin >> nums[i];
		}
		sort(nums);
		cnt = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(nums[i] + nums[j] >= m) {
					break;
				}
				else{
					sums[cnt++] = nums[i] + nums[j];
				}
			}
		}
		for(int i = 0; i < 2*n; i++)
			cout << sums[i] << endl;
	}
	return 0;
}
