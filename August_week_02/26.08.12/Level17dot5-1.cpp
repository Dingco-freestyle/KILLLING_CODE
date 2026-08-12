#include <iostream>
using namespace std;

int getSum(int arr[11], int x) {
	int sum = 0;

	for (int i = x; i < x + 5; i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[11] = { 3, 4, 1, 1, 2, 6, 8, 7, 8, 9, 10 };

	int startIdx = 0;
	cin >> startIdx;

	int sum = getSum(arr, startIdx);

	cout << sum;

	return 0;
}