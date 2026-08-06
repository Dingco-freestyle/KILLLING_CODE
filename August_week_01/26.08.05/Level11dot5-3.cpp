#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[8] = { 'A', '1', '1', '1', '5', 'A', 'w', 'z' };

	char c;
	cin >> c;

	int cnt = 0;

	for (int i = 0; i < 8; i++) {
		if (c == arr[i]) {
			cnt += 1;
		}
	}

	switch (cnt) {
	case 3:
		cout << "THREE";
		break;
	case 2:
		cout << "TWO";
		break;
	case 1:
		cout << "ONE";
		break;
	default:
		cout << "NOTHING";
	}

	return 0;
}