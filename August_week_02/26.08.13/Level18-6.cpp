#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char town[3][3] = {
	{'C', 'D', 'A'},
	{'B', 'M', 'Z'},
	{'Q', 'P', 'O'}
	};

	char black[4];
	int cnt = 0;

	for (int i = 0; i < 4; i++) {
		cin >> black[i];
	}

	for (int i = 0; i < 4; i++) {
		
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (black[i] == town[j][k]) {
					cnt += 1;
				}
			}
		}
	}

	cout << cnt << "Έν";

	return 0;
}