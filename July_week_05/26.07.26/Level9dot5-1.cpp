#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A[5] = { 2, 1, 2, 4, 5 };
	int B[3][3] = { {2, 5, 3}, {4, 5,7}, {8, 7, 2} };

	int count = 0;
	int x;
	cin >> x;

	for (int i = 0; i < 5; i++) {
		if (x == A[i]) {
			count += 1;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (x == B[i][j]) {
				count += 1;
			}
		}
	}

	cout << count;

	return 0;
}