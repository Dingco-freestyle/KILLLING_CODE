#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][4] = { 0 };

	char c;
	int num;

	for (int i = 0; i < 3; i++) {
		cin >> c >> num;

		if (c == 'G') {
			for (int j = 0; j < 4; j++) {
				arr[num][j] = 1;
			}
		}
		else if (c == 'S') {
			for (int k = 0; k < 4; k++) {
				arr[k][num] = 1;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}