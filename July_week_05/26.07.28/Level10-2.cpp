#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][4] = { 0 };

	int x;
	cin >> x;

	// Â¦¼ö
	if (x % 2 == 0) {
		for (int i = 0; i < 4; i++) {
			arr[i][i] = i + 1;
		}
	}
	// È¦¼ö
	else {
		for (int i = 0; i < 4; i++) {
			arr[i][3 - i] = i + 1;
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