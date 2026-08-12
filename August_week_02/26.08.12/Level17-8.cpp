#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[6] = { 'B', 'T', 'K', 'I', 'G', 'Z' };

	char target[4];
	int cnt = 0;

	for (int i = 0; i < 4; i++) {
		cin >> target[i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			if (target[i] == arr[j]) {
				cnt += 1;
				break;
			}
		}
	}

	cout << cnt;

	return 0;
}