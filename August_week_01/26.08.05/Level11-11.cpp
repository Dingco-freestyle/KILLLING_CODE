#include <iostream>
using namespace std;
#include <vector>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][4] = { {1,3,6,2}, {4, 2, 4, 5}, {6, 3, 7, 3}, {1, 5, 4, 6} };
	int select[16];

	int num;
	cin >> num;

	int idx = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (num < arr[i][j]) {
				select[idx] = arr[i][j];
				idx++;

			}
		}
	}

	for (int i = 0; i < idx; i++) {
		cout << select[i] << " ";
	}

	return 0;
}