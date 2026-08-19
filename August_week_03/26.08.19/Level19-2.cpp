#include <iostream>
using namespace std;

int dy[4] = { -1, -1, 1, 1 };
int dx[4] = { -1, 1, -1, 1 };

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int MAP[5][5] = {
	{3, 3, 5, 3, 1},
	{2, 2, 4, 2, 6},
	{4, 9, 2, 3, 4},
	{1, 1, 1, 1, 1},
	{3, 3, 5, 9, 2}
	};

	int max = 0, sum;
	int x = 0, y = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {

			sum = 0;

			for (int k = 0; k < 4; k++) {
				int nx = j + dx[k];
				int ny = i + dy[k];

				if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5) {
					sum += MAP[ny][nx];
				}

				if (max < sum) {
					max = sum;
					x = j;
					y = i;
				}
			}
		}
	}
	cout << y << " " << x;
	return 0;
}