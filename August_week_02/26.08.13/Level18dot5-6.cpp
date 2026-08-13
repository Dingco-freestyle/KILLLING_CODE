#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int win[2][3] = { {3, 5, 1}, {4, 2, 6} };
	int people[4];
	int flag[4] = { 0 };

	for (int i = 0; i < 4; i++) {
		cin >> people[i];
	}

	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 3; k++) {
				if (people[i] == win[j][k]) {
					flag[i] = 1;
					break;
				}
				else {
					flag[i] = 0;
				}
			}
			if (flag[i])
				break;
		}
	}

	for (int i = 0; i < 4; i++) {
		if (flag[i]) {
			cout << people[i] << "번 합격" << "\n";
		}
		else {
			cout << people[i] << "번 불합격" << "\n";
		}
	}

	return 0;
}