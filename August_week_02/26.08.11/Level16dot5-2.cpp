#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[6][3];
	char c = 'A';

	int x, y;
	cin >> x >> y;

	for (int i = 2; i >= 0; i--) {
		for (int j = 5; j >= 0; j--) {
			arr[j][i] = c;
			c++;
		}
	}

	cout << arr[x][y];

	return 0;
}