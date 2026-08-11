#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[6];

	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}

	int tmp = 0;
	for (int i = 1; i <= 5; i++) {
		arr[i] = arr[i-1] + arr[i];
		
	}

	for (int a : arr) {
		cout << a << " ";
	}

	return 0;
}