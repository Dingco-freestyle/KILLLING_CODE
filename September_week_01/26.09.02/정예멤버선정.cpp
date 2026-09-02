#include <iostream>
using namespace std;
#include <climits>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	// array result
	int result[3][3] = { 0 };

	// array A
	int arrA[3][3] = {
		{2, 6, 3},
		{7, 1, 1},
		{3, 4, 2}
	};
	int flagA[3][3] = { 0 };
	

	// array B
	int arrB[2][4] = {
		{6, 4, 2, 4},
		{1, 1, 5, 8}
	};
	int flagB[2][4] = { 0 };


	// array C
	int arrC[2][3] = {
		{9, 2, 3},
		{4, 2, 1}
	};
	int flagC[2][3] = { 0 };
	int max_val_C = 0;


	// A 배열에서 MAX값 3개 찾기
	for (int k = 0; k < 3; k++) {

		int max_val = INT_MIN;
		int idx_i, idx_j;

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {

				if (!flagA[i][j] && arrA[i][j] > max_val) {
					max_val = arrA[i][j];
					idx_i = i;
					idx_j = j;
				}
			}
		}
		flagA[idx_i][idx_j] = 1;
		result[0][k] = max_val;
	}

	// B 배열에서 MIN값 3개 찾기
	for (int k = 0; k < 3; k++) {

		int min_val = 99;
		int idx_i, idx_j;

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 4; j++) {

				if (!flagB[i][j] && arrB[i][j] < min_val) {	
					min_val = arrB[i][j];
					idx_i = i;
					idx_j = j;
				}
			}
		}
		flagB[idx_i][idx_j] = 1;
		result[1][k] = min_val;
	}

	// C 배열에서 MAX값 1개, MIN값 2개 찾기
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (max_val_C < arrC[i][j]) {
				max_val_C = arrC[i][j];
			}
		}
	}
	result[2][2] = max_val_C;

	for (int k = 0; k < 2; k++) {
		int min_val = 99;
		int idx_i, idx_j;

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++) {

				if (!flagC[i][j] && arrC[i][j] < min_val) {
					min_val = arrC[i][j];
					idx_i = i;
					idx_j = j;
				}
			}
		}
		flagC[idx_i][idx_j] = 1;
		result[2][k] = min_val;
	}

	// 출력
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << result[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}