#include <iostream>
using namespace std;

void input(char arr[2][3]) {
	char c;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> c;
			arr[i][j] = c;
		}
	}
}

void findUpper(char arr[2][3]) {
	int CNT = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] >= 'A' && arr[i][j] <= 'Z') {
				CNT += 1;
			}
		}
	}
	cout << "대문자" << CNT << "개" << "\n";
}

void findLower(char arr[2][3]) {
	int cnt = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] >= 'a' && arr[i][j] <= 'z') {
				cnt += 1;
			}
		}
	}

	cout << "소문자" << cnt << "개";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[2][3];
	char c;

	input(arr);
	findUpper(arr);
	findLower(arr);

	return 0;
}