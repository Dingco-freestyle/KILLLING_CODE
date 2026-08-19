#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16} };

	int input[4] = { 0 };
	int output[4][4] = { 0 };

	for (int i = 0; i < 4; i++) {
		cin >> input[i];
	}

	int val = 1;

	for (int i = 0; i < 4; i++) {
		
		for (int a = 0; a < 4; a++) {
			for (int b = 0; b < 4; b++) {
				if (input[i] == arr[a][b]) {
					output[a][b] = val;
					val++;
				}
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << output[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}