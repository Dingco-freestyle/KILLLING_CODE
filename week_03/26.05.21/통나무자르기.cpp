// SWEA D3 14692번 - 통나무 자르기

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int N;
		cin >> N;

		cout << "#" << i << ' ';

		if (N % 2 == 0) {
			cout << "Alice" << "\n";
		}
		else {
			cout << "Bob" << "\n";
		}
	}
	return 0;
}