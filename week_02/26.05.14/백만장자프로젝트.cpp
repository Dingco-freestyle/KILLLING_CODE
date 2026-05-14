// 백만 장자 프로젝트

#include <iostream>
using namespace std;
#include <vector>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int N; // 연속된 N일(= 구매기간)
		cin >> N;
		
		vector<int> V;

		for (int j = 0; j < N; j++) {
			int p1;
			cin >> p1;

			V.push_back(p1);
		}

		// (핵심1)
		long long max_ans = 0; // 최대 이익
		// long long으로 설정하는 이유는 N이 최대 1,000,000이기 때문이다
		int max_index = V[N - 1]; // 맨 마지막 값을 최댓값으로 지정

		// (핵심2) <-- 앞으로 한 칸씩 가면서
		for (int j = N - 2; j >= 0; j--) {
			if (V[j] < max_index)
				max_ans += max_index - V[j];
			else
				max_index = V[j];
		}
		cout << "#" << i << ' ' << max_ans << "\n";
	}
	return 0;
}