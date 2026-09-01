#include <iostream>
using namespace std;

struct Point {
	int y;
	int x;
};

int MAP[5][5] = {
	1, 2, 2, 1, 1,
	2, 2, 3, 1, 4,
	3, 2, 4, 6, 1,
	1, 6, 1, 2, 3,
	0, 3, 2, 3, 4,
};

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	Point sp;
	cin >> sp.y >> sp.x;

	int sum = 0;

	for (int i = 0; i < 4; i++) {
		for (int dist = 1; dist < 5; dist++) {
			int ny = sp.y + dy[i] * dist;
			int nx = sp.x + dx[i] * dist;

			if (ny < 0 || nx < 0 || ny > 4 || nx > 4)
				break;

			sum += MAP[ny][nx];
		}
	}

	cout << sum;

	return 0;
}