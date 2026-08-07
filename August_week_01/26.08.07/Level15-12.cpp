#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[2][6] = { 0 };
	char tmp[12] = { 0 };
	int len[2] = { 0 };

	for (int i = 0; i < 2; i++) {
		cin >> arr[i];
	}

	int idx = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[i][j] == '\0') {
				len[i] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < len[i]; j++) {
			tmp[idx++] = arr[i][j];
		}
	}

	for (auto c : tmp) {
		cout << c;
	}
}
