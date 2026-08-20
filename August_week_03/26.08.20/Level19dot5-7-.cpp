#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int map[3][3] = {
		{3, 5, 1},
		{3, 8, 1},
		{1, 1, 5}
	};

	int bit[2][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> bit[i][j]; // 0 or 1¸¸ ÀÔ·Â
		}
	}

	int sum, max = -1;
	int Y = 0, X = 0;

	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1; j++) {

			sum = 0;

			for (int y = i; y < i + 2; y++) {
				for (int x = j; x < j + 2; x++) {
					if (bit[y-i][x-j] == 1) {
						sum += map[y][x];
					}
				}
			}
			if (max < sum) {
				max = sum;
				Y = i;
				X = j;
			}
		}
	}
	
	cout << "(" << Y << "," << X << ")";

	return 0;
}