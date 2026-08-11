#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[3][10];

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}

	bool flag = false;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			if ('M' == arr[i][j]) {
				flag = true;
				break;
			}
		}
	}

	if (flag) {
		cout << "M이 존재합니다";
	}
	else {
		cout << "M이 존재하지 않습니다";
	}

	return 0;
}