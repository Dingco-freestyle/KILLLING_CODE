#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int apt[5][3] = {
	{15, 18, 17},
	{4, 6, 9},
	{10, 1, 3},
	{7, 8, 9},
	{15, 2, 6}
	};

	int fam[3];
	cin >> fam[0] >> fam[1] >> fam[2];

	int cnt = 0;
	bool flag = true;
	int answer = 0;


	for (int i = 4; i >= 0; i--) {
		cnt++;
		for (int j = 0; j < 3; j++) {
			if (fam[j] != apt[i][j]) {
				flag = false;
				break;
			}
			answer = cnt;
		}
		if (flag) break;
	}
	cout << answer << "Ãþ";
	
	return 0;
}