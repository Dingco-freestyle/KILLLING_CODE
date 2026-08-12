#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[2][5] = { {0, 0, 1, 0, 0}, {0, 0, 1, 1, 1} };
	int arr2[2][5] = { {3, 5, 4, 1, 1}, {3, 5, 2, 5, 6} };

	int x; 
	cin >> x;

	int dy = 0, dx = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			if (x == arr2[i][j]) {
				dy = i;
				dx = j;
			}
		}
	}

	bool flag = false;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[dy][dx]) {
				flag = true;
				break;
			}
		}
	}

	if (flag) {
		cout << x << " 존재";
	}
	else {
		cout << x << " 없음";
	}
	
	return 0;
}