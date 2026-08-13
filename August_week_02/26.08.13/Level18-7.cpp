#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char alphabet[5][3] = {
	{'A', 'B', 'C'},
	{'A', 'G', 'H'},
	{'H', 'I', 'J'},
	{'K', 'A', 'B'},
	{'A', 'B', 'C'}
	};

	int cnt[26] = { 0 };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cnt[alphabet[i][j] - 'A']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < cnt[i]; j++) {
			if (cnt[i] != 0) {
				cout << (char)('A' + i);
			}
		}
	}

	return 0;
}