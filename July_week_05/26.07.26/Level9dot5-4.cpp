#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][3] = { {10, 3, 20}, {60, 30, 40}, {20, 30, 40} };

	int a, b;
	cin >> a >> b;

	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] >= a && arr[i][j] <= b) {
				cnt += 1;
			}
		}
	}
	cout << cnt;
	return 0;
}