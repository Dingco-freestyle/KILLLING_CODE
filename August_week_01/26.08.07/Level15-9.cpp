#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[3][9] = { "BBQWORLD", "KFCAPPLE", "LOT" };

	int cnt = 0;

	char c;
	cin >> c;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			if (c == arr[i][j]) {
				cnt += 1;
			}
		}
	}

	cout << cnt;

	return 0;
}