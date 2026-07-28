#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[5][5];
	int p = 1;

	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j < 5; j++) {
			arr[j][i] = p++;
		}
	}

	int x;
	cin >> x;

	
	for (int j = 0; j < 5; j++) {
		arr[x][j] = x;
	}
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
