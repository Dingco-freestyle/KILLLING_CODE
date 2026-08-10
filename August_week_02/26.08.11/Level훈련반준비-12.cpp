#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][4];

	int x;
	cin >> x;

	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < 4; j++) {
				arr[i][j] = x++;
			}
		}
		else if (i % 2 != 0) {
			for (int j = 3; j >= 0; j--) {
				arr[i][j] = x++;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}