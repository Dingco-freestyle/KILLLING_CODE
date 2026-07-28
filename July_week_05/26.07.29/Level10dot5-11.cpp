#include <iostream>
using namespace std;

void run(int a, int arr[][3]) {
	int p = 1;

	if (a < 10) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				arr[i][j] = p++;
			}
		}
	}
	else {
		for (int i = 0; i < 3; i++) {
			for (int j = 2; j >= 0; j--) {
				arr[i][j] = p++;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][3];
	int x;
	cin >> x;

	run(x, arr);

	return 0;
}