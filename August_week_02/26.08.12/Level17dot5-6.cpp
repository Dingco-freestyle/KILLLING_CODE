#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int pw[4] = { 3, 7, 4, 9 };
	int input[4];

	bool flag = true;

	for (int i = 0; i < 4; i++) {
		cin >> input[i];
	}

	for (int i = 0; i < 4; i++) {
		if (input[i] != pw[i]) {
			flag = false;
			break;
		}
	}

	if (flag) {
		cout << "pass";
	}
	else {
		cout << "fail";
	}

	return 0;
}