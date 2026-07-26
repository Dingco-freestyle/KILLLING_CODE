#include <iostream>
using namespace std;

void BBQ(int x) {
	for (int i = 1; i <= x; i++) {
		cout << i;
	}
}

void KFC(char C) {
	for (int i = 0; i < 7; i++) {
		cout << C;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num1;
	cin >> num1;

	if (num1 % 2 != 0) {
		int num2;
		cin >> num2;
		BBQ(num2);
	}
	else {
		char c;
		cin >> c;
		KFC(c);
	}

	return 0;
}