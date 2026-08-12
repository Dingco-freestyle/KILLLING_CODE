#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[3][6] = { {'A', 'T', 'K', 'B'}, {'C', 'Z', 'F', 'D'}, {'H', 'G', 'E', 'I'} };

	char c;
	cin >> c;

	int offsetX, offsetY;
	cin >> offsetX >> offsetY;

	int dx = 0, dy = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			if (c == arr[i][j]) {
				dx = i;
				dy = j;
			}
		}
	}

	cout << arr[dx + offsetX][dy + offsetY];
	
	return 0;
}