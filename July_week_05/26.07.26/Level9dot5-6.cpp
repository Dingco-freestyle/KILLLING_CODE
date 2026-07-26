#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][3] = { {3, 5, 14}, {2, 3, 9}, {6, 2, 7} };

	int num;
	cin >> num;
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] % num == 0) {
				cnt += 1;
			}
		}
	}

	cout << cnt;

	return 0;
}