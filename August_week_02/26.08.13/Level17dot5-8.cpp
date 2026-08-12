#include <iostream>
using namespace std;
#include <vector>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int map[2][3] = { {3, 55, 42}, {-5, -9, -10} };

	int pix[2][2];;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> pix[i][j];
		}
	}

	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {

			bool flag = false;

			for (int x = 0; x < 2; x++) {
				for (int y = 0; y < 3; y++) {
					if (pix[i][j] == map[x][y]) {
						flag = true;
						break;
					}
				}
			}

			if (flag) {
				cout << "Y ";
			}
			else {
				cout << "N ";
			}
		}
		cout << "\n";
	}
	return 0;
}