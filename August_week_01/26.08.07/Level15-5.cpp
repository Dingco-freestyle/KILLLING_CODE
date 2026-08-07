#include <iostream>
using namespace std;
#include <algorithm>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[4][7];
	int len[4] = { 0 };

	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++) {
			if (arr[i][j] == '\0') {
				len[i] = j;
				break;
			}
		}
	}

	sort(len, len + 4);

	for (int a : len) {
		cout << a << " ";
	}

	return 0;
}