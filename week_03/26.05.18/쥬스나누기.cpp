// SWEA D3 5601번 - 쥬스 나누기

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

		int p = 1;// 쥬스의 양은 1L
		int q = N;

		cout << "#" << i << ' ';
		for (int j = 0; j < N; j++) {
			cout << p << '/' << q << ' ';
		}
		cout << "\n";
	}
	return 0;
}