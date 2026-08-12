#include <iostream>
using namespace std;

int isExist(int arr[3][3], int x) {
	bool flag = false;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (x == arr[i][j]) {
				flag = true;
				break;
			}
		}
	}

	if (flag) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][3] = { {3, 5, 9}, {4, 2, 1}, {5, 1, 5} };

	int a, b, c;
	cin >> a >> b >> c;

	int result1, result2, result3;

	result1 = isExist(arr, a);
	result2 = isExist(arr, b);
	result3 = isExist(arr, c);

	if (result1) {
		cout << a << ":존재" << "\n";
	}
	else {
		cout << a << ":미발견" << "\n";
	}

	if (result2) {
		cout << b << ":존재" << "\n";
	}
	else {
		cout << b << ":미발견" << "\n";
	}

	if (result3) {
		cout << c << ":존재" << "\n";
	}
	else {
		cout << c << ":미발견" << "\n";
	}


	return 0;
}