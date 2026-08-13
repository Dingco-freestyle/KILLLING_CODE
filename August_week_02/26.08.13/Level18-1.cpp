#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int MAP[3][4] = {
	{65000, 35, 42, 70},
	{70, 35, 65000, 1300},
	{65000, 30000, 38, 42}
	};

	int cnt[65536] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cnt[MAP[i][j]] += 1;
		}
	}

	int max = 0;
	int maxIndex = 0;

	for (int i = 1; i <= 65535; i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			maxIndex = i;
		}
	}

	cout << maxIndex;

	return 0;
}