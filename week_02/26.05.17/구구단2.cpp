// SWEA D3 12221번 - 구구단2

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int A, B;
		cin >> A >> B;

		int ans = 0;
		if ((A > 9) || (B > 9))
			ans = -1;
		else
			ans = A * B;

		cout << "#" << i << ' ' << ans << "\n";
	}
	return 0;
}
