#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[2][6] = { {'A', '7', '9', 'T', 'K', 'Q'},
					   {'M', 'I', 'N', 'C', 'O', 'D'} };

	char a, b;
	cin >> a >> b;

	bool flagA, flagB = false;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			if (a == arr[i][j]) {
				flagA = true;
			}
			if (b == arr[i][j]) {
				flagB = true;
			}
		}
	}

	if (flagA) {
		cout << a << " : " << "존재" << "\n";
	}
	else {
		cout << a << " : " << "없음" << "\n";
	}

	if (flagB) {
		cout << b << " : " << "존재" << "\n";
	}
	else {
		cout << b << " : " << "없음" << "\n";
	}



	return 0;
}