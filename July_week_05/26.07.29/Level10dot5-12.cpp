#include <iostream>
using namespace std;

int yesOrNo() {
	int x;
	cin >> x;

	if (x % 3 == 0) {
		return 7;
	}
	else if (x % 3 == 1) {
		return 35;
	}
	else if (x % 3 == 2) {
		return 50;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int ret = yesOrNo();

	cout << ret;

	return 0;
}