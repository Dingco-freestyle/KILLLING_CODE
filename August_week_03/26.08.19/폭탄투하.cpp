#include <iostream>
using namespace std;

int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[4][5];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = '_';
		}
	}

	int y, x;
	cin >> y >> x;

	int y2, x2;
	cin >> y2 >> x2;

	for (int i = 0; i < 8; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (nx >= 0 && nx < 5 && ny >= 0 && ny < 4) {
			arr[ny][nx] = '#';
		}
	}

	for (int i = 0; i < 8; i++) {
		int ny= y2 + dy[i];
		int nx = x2 + dx[i];

		if (nx >= 0 && nx < 5 && ny >= 0 && ny < 4) {
			arr[ny][nx] = '#';
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << "\n";
	}

	return 0;
}