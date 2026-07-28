#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][3] = { 0 };

	int x;
	cin >> x;

	int p1 = 9;
	int p2 = 10;

	if (x % 5 == 1) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				arr[j][i] = p1--;
			}
			
		}
	}
	else if (x % 5 == 2) {
		for (int i = 0; i < 3; i++) {
			for (int j = 2; j >= 0; j--) {
				arr[i][j] = p1--;
			}
		}
	}
	else {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				arr[j][i] = p2++;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}