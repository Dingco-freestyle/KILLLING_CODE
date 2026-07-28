#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][4];
	int x;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> x;
			arr[i][j] = x;
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == 0) {
				cout << "!";
			}
			else if (arr[i][j] % 2 == 0) {
				cout << "#";
			}
			else if (arr[i][j] % 2 != 0) {
				cout << "@";
			}
		}
		cout << "\n";
	}
	return 0;
}
