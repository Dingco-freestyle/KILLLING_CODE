#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[7] = { 3, 5, 4, 2, 6, 6, 5 };
	int bit[7];

	for (int i = 0; i < 7; i++) {
		cin >> bit[i];
	}

	for (int i = 0; i < 7; i++) {
		if (bit[i] == 1) {
			arr[i] = 7;
		}
		else {
			arr[i] = 0;
		}
	}

	for (int a : arr) {
		cout << a;
	}

	return 0;
}