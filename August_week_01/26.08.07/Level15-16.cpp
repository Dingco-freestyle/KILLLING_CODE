#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[3][3] = { 0 };

	char c;
	cin >> c;

	for (int i = 2; i >= 0; i--) {
		for (int j = 0; j < 3 - i; j++) {
			arr[i][j] = c;
			c++;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == '\0') {
				cout << "";
			}
			else {
				cout << arr[i][j];
			}
		}
		cout << "\n";
	}


	return 0;
}