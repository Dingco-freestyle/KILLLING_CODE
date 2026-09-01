#include <iostream>
using namespace std;

int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[4][4];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = '_';
		}
	}

	int y, x;
	for (int i = 0; i < 3; i++) {
		cin >> y >> x;
		arr[y][x] = '#';
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			
			if (arr[i][j] == '#') {
				for (int k = 0; k < 8; k++) {

					int ny = i + dy[k];
					int nx = j + dx[k];

					if (ny < 0 || ny > 3 || nx < 0 || nx > 3)
						continue;

					if (arr[ny][nx] != '#')
						arr[ny][nx] = '@';
				}
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
	
	return 0;
}
