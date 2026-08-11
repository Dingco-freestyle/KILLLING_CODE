#include <iostream>
using namespace std;

void getMax(int arr[][3], int *x1, int *y1) {
	int max = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				*x1 = i;
				*y1 = j;
			}
		}
	}
}

void getMin(int arr[][3], int *x2, int *y2) {
	int min = arr[0][0];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (min > arr[i][j]) {
				min = arr[i][j];
				*x2 = i;
				*y2 = j;
			}
		}
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[2][3];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	int x1, y1, x2, y2;
	getMax(arr, &x1, &y1);
	getMin(arr, &x2, &y2);

	cout << "(" << x1 << "," << y1 << ")" << "\n";
	cout << "(" << x2 << "," << y2 << ")";

	return 0;
}