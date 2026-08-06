#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][3] = { {3,1,6}, {7,8,4}, {9, 2, 3} };

	int a, b, c;
	cin >> a >> b >> c;

	arr[a][b] = c;

	int max = 0, min = arr[0][0];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (min > arr[i][j]) {
				min = arr[i][j];
			}
		}
	}

	cout << max + min;

	return 0;
}