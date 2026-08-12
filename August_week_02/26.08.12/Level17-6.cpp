#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][4] = { {0, 0, 0, 1}, {1, 1, 0, 1} , {1, 0, 0, 1},   {1, 1, 1 ,1} };
	int arr2[4][4] = { {1, 1, 1, 1}, {1, 0, 1, 1} , {1, 0, 0, 0},   {1, 0, 0 ,0} };


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			arr[i][j] += arr2[i][j];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == 0) {
				cout << "(" << i << "," << j << ")" << "\n";
			}
		}
	}

	return 0;
}