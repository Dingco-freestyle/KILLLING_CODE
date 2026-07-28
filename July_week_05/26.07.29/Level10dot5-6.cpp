#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[6][3];
	int p = 10;

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 6; i++) {
			arr[i][j] = p++;
		}
	}

	int a, b;
	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = 7;
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}