#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char str[8];
	char big[8] = { 0 };
	char small [8] = { 0 };

	int idx1 = 0;
	int idx2 = 0;

	for (int i = 0; i < 8; i++) {
		cin >> str[i];
	}

	for (int i = 0; i < 8; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			big[idx1++] = str[i];
		}
		else if(str[i] >= 'a' && str[i] <= 'z') {
			small[idx2++] = str[i];
		}
	}

	cout << "big=";
	for (auto c : big) {
		cout << c;
	}
	cout << "\n";

	cout << "small=";
	for (auto c : small) {
		cout << c;
	}

	return 0;
}