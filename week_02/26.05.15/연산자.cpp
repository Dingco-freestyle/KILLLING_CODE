// += 연산자 활용
// (Greedy 알고리즘)

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int A; // x
		int B; // y
		int N; // N
		cin >> A >> B >> N;

		int cnt = 0;

		while (1) {
			if (A >= B) {
				// 2 1 5
				B += A;
				cnt++;
			}
			else if (A <= B) {
				// 1 2 5
				A += B;
				cnt++;
			}

			if ((A > N) || (B > N))
				break;
		}
		cout << cnt << "\n";
	}
	return 0;
}