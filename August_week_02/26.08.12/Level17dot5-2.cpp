#include <iostream>
using namespace std;

int arr[6] = { 3, 7, 4, 1, 2, 6 };
int map[10] = { 0, 1, 1, 1, 1, 0, 1, 1, 0, 0 };




int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int univer[2][2];
	int val;


	// 입력 받는 부분
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> univer[i][j];
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (map[univer[i][j]]) {
				cout << "OK ";
			}
			else {
				cout << "NO ";
			}
		}
		cout << endl;
	}

	return 0;
}