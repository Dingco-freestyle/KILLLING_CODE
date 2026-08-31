#include <iostream>
using namespace std;

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][4];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}

	bool flag = false;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == 1) {

				for (int k = 0; k < 4; k++) {
					int ny = i + dy[k];
					int nx = j + dx[k];

					if (ny < 0 || ny > 3 || nx < 0 || nx > 3) {
						continue;
					}

					if (arr[ny][nx] == 1) {
						flag = true;
						break;
					}
				}
			}
		}
	}

	if (flag)
		cout << "위험한 상태";
	else
		cout << "안전한 상태";

	return 0;
}
