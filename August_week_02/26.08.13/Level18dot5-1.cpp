#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[2][3] = { {'G', 'K', 'G'} ,{} };
	
	for (int i = 0; i < 3; i++) {
		cin >> arr[1][i];
	}

	int cnt[26] = { 0 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cnt[arr[i][j] - 'A']++;
		}
	}

	bool flag = false;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] >= 3) {
			flag = true;
			break;
		}
		if (flag)
			break;
	}

	if(flag)
		cout << "있음";
	else
		cout << "없음";

	return 0;
}