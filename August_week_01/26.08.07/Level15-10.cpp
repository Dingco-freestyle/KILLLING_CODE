#include <iostream>
using namespace std;

void CountLine(char arr[3][10], int len[3]) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == '\0') {
				len[i] = j;
				break;
			}
		}
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int len[3];
	char arr[3][10];

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}

	CountLine(arr, len);

	for (int i = 0; i < 3; i++) {
		cout << len[i] << '=' << arr[i] << "\n";
	}

	return 0;
}