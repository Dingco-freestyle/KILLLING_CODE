#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[8] = {5, 9, 4, 6, 1, 5, 8, 9};

	int idx, target;
	cin >> idx >> target;

	int offset = 0;

	for (int i = 3; i < 8; i++) {
		if (target == arr[i]) {
			offset = i;
			break;
		}
	}
	
	cout << offset - idx;
	return 0;
}