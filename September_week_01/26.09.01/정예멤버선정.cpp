#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arrA[3][3] = {
		{2, 6, 3},
		{7, 1, 1},
		{3, 4, 2}
	};
	int checkA[3][3] = { 0 };

	int minB[3] = {0};
	int arrB[2][4] = {
		{6, 4, 2, 4},
		{1, 1, 5, 8}
	};

	int arrC[2][3] = {
		{9, 2, 3},
		{4, 2, 1}
	};

	// 결과를 저장할 배열
	int result[3][3] = { 0 };


	int maxA = 0, maxA_idx = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (maxA < arrA[i][j]) {
				maxA = arrA[i][j];

			}
		}
	}


	return 0;
}