#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][4];
	int x;
	cin >> x;

	if (x == 1) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4; j++) {
				if (i + j >= 2)
					arr[i][j] = x++;
				else
					cout << ' ';
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
	return 0;
}