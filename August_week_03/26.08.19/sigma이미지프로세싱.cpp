#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][4] = { 0 };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}

	int max = 0;
	int y, x;

	// 작은 배열이 움직일 수 있는 범위를 계산해서 for문 범위 설정
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 1; j++) {

			int sum = 0;

			// 현재 (i, j)를 시작점으로 2 x 3 영역의 합 계산
			for (int a = i; a < i + 2; a++) {
				for (int b = j; b < j + 3; b++) {
					sum += arr[a][b];
				}
			}

			if (max < sum) {
				max = sum;
				y = i;
				x = j;
			}
		}
	}
	
	cout << "(" << y << "," << x << ")";

	return 0;
}