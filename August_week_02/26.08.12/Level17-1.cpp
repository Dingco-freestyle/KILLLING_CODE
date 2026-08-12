#include <iostream>
using namespace std;

int isExist(char arr[4], char c) {
	bool flag = false;
	for (int i = 0; i < 4; i++) {
		if (arr[i] == c) {
			flag = true;
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

	char arr[4] = { 'M', 'T', 'K', 'C' };

	char c;
	cin >> c;

	int result;

	result = isExist(arr, c);

	if (result) {
		cout << "발견";
	}
	else {
		cout << "미발견";
	}

	return 0;
}