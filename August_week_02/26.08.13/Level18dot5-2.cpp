#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[6];
	int cnt[100] = { 0 };

	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}


	for (int i = 0; i < 6; i++) {
		cnt[arr[i]]++;
	}

	bool flag = false;

	for (int i = 0; i < 6; i++) {
		if (cnt[i] == 2) {
			flag = true;
			break;
		}
		if (flag)
			break;
	}

	if (flag)
		cout << "도플갱어 발견";
	else
		cout << "미발견";

	return 0;
}