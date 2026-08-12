#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[6];
	int mask[6] = { 1, 0, 1, 0, 1, 0 };

	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 6; i++) {
		if (mask[i] == 0) {
			arr[i] = 0;
		}
	}

	int min = arr[0];
	int minIdx = 0;
	for (int i = 1; i < 6; i++) {
		if (arr[i] == 0) {
			continue;
		}
		if (min > arr[i]) {
			min = arr[i];
			minIdx = i;
		}
	}

	cout << "arr[" << minIdx << "]=" << min;

	return 0;
}