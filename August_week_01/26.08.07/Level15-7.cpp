#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[7] = { 'A', 'B', 'C', 'Z', 'E', 'T', 'Q' };

	char Black[5];
	bool flag[5] = { false };

	for (int i = 0; i < 5; i++) {
		cin >> Black[i];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			if (Black[i] == arr[j]) {
				flag[i] = true;
				break;
			}
		}
	}	

	for (int i = 0; i < 5; i++) {
		if (flag[i]) {
			cout << Black[i] << "=" << "마을사람" << "\n";
		}
		else {
			cout << Black[i] << "=" << "외부사람" << "\n";
		}
	}

	return 0;
}