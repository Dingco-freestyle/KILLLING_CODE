#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr1[2][3];
	int arr2[6];

	for (int i = 1; i >= 0; i--) {
		for (int j = 2; j >= 0; j--) {
			cin >> arr1[i][j];
		}
	}

	int idx = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			arr2[idx++] = arr1[i][j];
		}
	}

	int tmp = 0;
	tmp = arr2[5];
	arr2[5] = arr2[0];
	arr2[0] = tmp;

	for (int i = 0; i < 6; i++) {
		cout << arr2[i] << ' ';
	}

	return 0;
}