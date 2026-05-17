// SWEA D3 13218번 - 조별과제

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

		int max = N / 3;

		cout << "#" << i << ' ' << max << "\n";
	}
	return 0;
}
