#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[5][5];

	char c = 'A';
	char C;
	cin >> C;

	int offsetX = 2;
	int offsetY = 2;
	int dx = 0, dy = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = c++;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (C == arr[i][j]) {
				dy = i;
				dx = j;
				
				offsetY = dy - offsetY;
				offsetX = dx - offsetX;
			}
		}
	}
	cout << offsetY << "," << offsetX;

	return 0;
}