#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][4];
	int col;
	cin >> col;

	int p = 1;

	for (int i = 2; i >= 0; i--) {
		for (int j = 3; j >= 0; j--) {
			arr[i][j] = p++;
		}
	}

	for (int i = 0; i < 3; i++) {
		arr[i][col] = 0;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}


	return 0;
}