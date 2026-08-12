#include <iostream>
using namespace std;

int arr[3][3] = { {3, 7, 4}, {2, 2, 4}, {2, 2, 5} };

int getCount(int target) {
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == target) {
				cnt += 1;
			}
		}
	}
	return cnt;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	
	int target[3];
	int cnt[3] = { 0 };
	int ret;
	int max = 0;
	int maxValue;

	for (int i = 0; i < 3; i++) {
		cin >> target[i];
	}

	for (int i = 0; i < 3; i++) {

		ret = getCount(target[i]);

		if (ret > max) {
			max = ret;
			maxValue = target[i];
		}
	}
	cout << maxValue;

	return 0;
}					