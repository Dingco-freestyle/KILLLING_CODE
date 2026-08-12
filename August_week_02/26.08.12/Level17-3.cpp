#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][3] = { {3, 5, 9}, {4, 2, 1}, {1, 1, 5} };

	int arr2[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr2[i][j];
		}
	}

	int sum = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr2[i][j] == 1) {
				sum += arr[i][j];
			}
		}
	}

	cout << sum;

	return 0;
}