#include <iostream>
using namespace std;


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[5][10];
	int len[5] = { 0 };
	int max = 0;
	int index = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == '\0') {
				len[i] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		if (max < len[i]) {
			max = len[i];
			index = i;
		}
	}

	cout << arr[index];

	return 0;
}