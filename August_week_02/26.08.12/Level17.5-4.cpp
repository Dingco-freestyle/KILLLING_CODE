#include <iostream>
using namespace std;
char arr[2][3] = { {'G', 'K', 'T'}, {'P', 'A', 'C'} };

int isExist(char c) {
	bool flag = false;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (c == arr[i][j]) {
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

	char a, b;
	cin >> a >> b;

	int ret1, ret2;

	ret1 = isExist(a);
	ret2 = isExist(b);

	if (ret1 && ret2) {
		cout << "대발견";
	}
	else if (ret1 || ret2) {
		cout << "중발견";
	}
	else {
		cout << "미발견";
	}

	return 0;
}