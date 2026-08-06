#include <iostream>
using namespace std;

int arr[3][3]{ {1, 1, 1}, {1, 2, 1}, {3, 6, 3} };

int Count(int a) {
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (a == arr[i][j]) {
				cnt += 1;
			}
		}
	}

	return cnt;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	int ret = Count(x);

	cout << ret;

	return 0;
}