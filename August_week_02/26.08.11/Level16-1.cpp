#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[3][10];
	
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == '\0') {
				cout << arr[i][j - 1];
			}

		}
	}

	return 0;
}