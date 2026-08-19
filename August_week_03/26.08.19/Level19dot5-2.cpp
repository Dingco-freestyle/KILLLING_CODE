#include <iostream>
using namespace std;

int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[5][4] = { 0 };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}

	bool flag = false;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {

			if (arr[i][j] == 1) {
				for (int k = 0; k < 8; k++) {
					int ny = i + dy[k];
					int nx = j + dx[k];

					if (ny >= 0 && ny < 5 && nx >= 0 && nx < 4) {
						if (arr[ny][nx] == 1) {
							flag = true;
							break;
						}
					}
				}
			}
		}
	}

	if (flag)
		cout << "불안정한 상태";
	else
		cout << "안정된 상태";

	return 0;
}