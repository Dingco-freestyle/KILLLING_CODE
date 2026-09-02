#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[5][4];
	int result[5][4] = { 0 };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}

	int row = 4;

	for (int i = 4; i >= 0; i--) {

		bool flag = true;

		// 하나라도 0이면 탈출
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == 0) {
				flag = false;
				break;
			}
		}

		if (flag)
			continue;

		for (int k = 0; k < 4; k++) 
			result[row][k] = arr[i][k];
		
		row--;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << result[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}