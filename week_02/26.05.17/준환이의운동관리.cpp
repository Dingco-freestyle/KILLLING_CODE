// 준환이의 운동관리

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int L; // 일주일에 L분 이상 해야하는 운동 시간
		int U; // 일주일에 U분 이하  
		int X; // 일주동안 운동한 시간

		// 범위 : 0 <= L <= U <= 10^7, 0 <= X <= 10^7

		cin >> L >> U >> X;

		int ans = 0;

		if ((X >= L) && (X <= U))
			ans = 0;
		else if (X < L)
			ans = L - X;
		else
			ans = -1;

		cout << "#" << i << ' ' << ans << "\n";
	}
	return 0;
}