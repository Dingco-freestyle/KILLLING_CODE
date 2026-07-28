#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][4];
	int p = 16;

	for (int j = 0; j < 4; j++) {
		for (int i = 3; i >= 0; i--) {
			arr[i][j] = p--;
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << "\n";
	}

	return 0;
}