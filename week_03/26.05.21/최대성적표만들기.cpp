// SWEA D3 4466번 - 최대 성적표 만들기

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int N, K;
		int sum = 0;
		cin >> N >> K;
		vector<int> V;

		for (int j = 0; j < N; j++) {
			int score;
			cin >> score;
			V.push_back(score);
		}

		// 오름차순보다 내림차순 하면 더 효율적이게 됨
		sort(V.begin(), V.end(), greater<int>());

		for (int j = 0; j < K; j++) {
			sum += V[j];
		}

		cout << "#" << i << ' ' << sum << "\n";
	}
	return 0;
}

/*
 내 풀이
sort(V.begin(), V.end());

while (K > 0) {
	for (int j = V.size() - 1; j >= 0; j--) {
		sum += V[j];
		K -= 1;
		if (K == 0)
			break;
	}
}
*/