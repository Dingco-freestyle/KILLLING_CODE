#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[4][5];
	bool flagA = false;
	bool flagB = false;


	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if ('A' == arr[i][j]) {
				flagA = true;
			}
			if ('B' == arr[i][j]) {
				flagB = true;
			}		
		}
	}

	if (flagA && flagB) {
		cout << "대발견";
	}
	else if (flagA || flagB) {
		cout << "중발견";
	}
	else {
		cout << "미발견";
	}

	return 0;
}