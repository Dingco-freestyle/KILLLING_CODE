#include <iostream>
using namespace std;

char arr[3][5] = { {'D', 'A', 'C', 'C', 'D'},
				  {'S', 'D', 'F', 'A', 'E'},
				  {'E', 'E', 'T', 'J', 'H'} };

int CHECK(char C) {
	int ans = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (C == arr[i][j]) {
				ans = 1;
			}
		}
	}
	return ans;
}

void INPUT() {
	char c;
	cin >> c;
	int ans = CHECK(c);

	if (ans == 1) {
		cout << "있음";
	}
	else {
		cout << "없음";
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	INPUT();

	return 0;
}
