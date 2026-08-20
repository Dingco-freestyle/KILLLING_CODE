#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char map[3][4] =
	{ {'A', 'B', 'G', 'K'}, 
	  {'T', 'T', 'A', 'B'}, 
	  {'A', 'C', 'C', 'D'} };

	char pattern[2][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> pattern[i][j]; 
		}
	}

	int cnt = 0;
	bool flag;

	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 2; j++) {

			flag = false;

			for (int y = i; y < i + 2; y++) {
				for (int x = j; x < j + 2; x++) {
					if (map[y][x] != pattern[y - i][x - j]) {
						flag = true;
						break;
					}
				}
			}
			if (!flag) {
				cnt += 1;
			}
		}
	}

	if (cnt >= 1)
		cout << "발견(" << cnt << "개)";
	
	else 
		cout << "미발견";
	
	return 0;
}