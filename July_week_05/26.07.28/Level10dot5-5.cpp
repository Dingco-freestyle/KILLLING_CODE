#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][4];

	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 0; i < 4; i++) {
		arr[0][i] = a++;
	}

	for (int i = 0; i < 4; i++) {
		arr[1][i] = b++;
	}

	for (int i = 0; i < 4; i++) {
		arr[2][i] = c++;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}