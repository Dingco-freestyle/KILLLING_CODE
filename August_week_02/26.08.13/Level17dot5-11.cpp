#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4] = { 3, 5, 4, 2 };
	int mask[4];

	for (int i = 0; i < 4; i++) {
		cin >> mask[i];
	}
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		if (mask[i] == 1) {
			sum += arr[i];
		}
	}

	cout << sum;

	return 0;
}