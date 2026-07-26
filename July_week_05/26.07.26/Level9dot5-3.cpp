#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[5][3] = { {'D', 'A', 'A'}, {'B', 'C', 'D'}, {'E', 'F', 'A'},
						{'A', 'A', 'D'}, {'F', 'G', 'E'} };

	char C;
	cin >> C;

	int x = 0, y = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (C == arr[i][j]) {
				x = i;
				y = j;
				cout << "(" << x << "," << y << ")" << "\n";
			}
		}
	}
	return 0;
}