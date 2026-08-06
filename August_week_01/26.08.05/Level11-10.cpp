#include <iostream>
using namespace std;

int arr[2][5] = { {3, 2, 6, 2, 4}, {1, 4, 2, 6, 5} };

int KFC(int a) {

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			if (a == arr[i][j]) {
				return 1;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int target;
	cin >> target;

	int ret = KFC(target);

	if (ret) {
		cout << "값이 존재합니다";
	}
	else {
		cout << "값이 없습니다";
	}

	return 0;
}