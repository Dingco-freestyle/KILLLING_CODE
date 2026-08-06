#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[6] = { 'D', 'F', 'G', 'D', 'A', 'Q' };
	char ch1, ch2;
	cin >> ch1 >> ch2;

	bool flag = false;

	for (int i = 0; i < 6; i++) {
		if (ch1 <= arr[i] <= ch2) {
			flag = true;
		}
	}


	if (flag) {
		cout << "발견!!!";
	}
	else {
		cout << "미발견!!!";
	}
	return 0;
}