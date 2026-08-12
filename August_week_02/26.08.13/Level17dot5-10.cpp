#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][3] = { {3, 1, 9}, {7, 2, 1}, {1, 0, 8} };
	int mask[3][3];
	bool flag = false;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> mask[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (mask[i][j] == 0) {
				arr[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == 0)
				continue;
			if (arr[i][j] >= 3 && arr[i][j] <= 5) {
				flag = true;
				break;
			}
		}
	}

	if (flag){
		cout << "발견";
	}
	else{
		cout << "미발견";
	}

	return 0;
}