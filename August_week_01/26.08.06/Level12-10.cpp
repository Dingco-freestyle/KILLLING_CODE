#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[5][5];
	int a;
	cin >> a;
	
	char c;
	cin >> c;

	
	for (int i = 4; i >= 0; i--) {
		arr[a-1][i] = c;
		c++;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] == 0) {
				cout << "0";
			}
			else {
				cout << arr[i][j];
			}
		}
		cout << "\n";
	}

	return 0;
}