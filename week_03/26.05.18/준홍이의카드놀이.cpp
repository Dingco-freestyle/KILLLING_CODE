// SWEA D3 7102번 - 준홍이의 카드놀이

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
		int N, M; // 1~N, 1~M
		cin >> N >> M;

		vector<int> v1;
		vector<int> v2;
		vector<int> v3;

		for (int j = 1; j <= N; j++)
			v1.push_back(j);
		for (int j = 1; j <= M; j++)
			v2.push_back(j);

		int sum = N + M;

		for (int j = 2; j <= sum; j++) {
			int max_cnt = 0;
			for (int a = 0; a < v1.size(); a++) {
				for (int b = 0; b < v2.size(); b++) {
					if (v1[a] + v2[b] == j) {
						max_cnt += 1; // 합이 2인 경우의 가짓수를 카운트 +1
						// v3.push_back(max_cnt); <-- 내 풀이
						// push 위치 오류
					}
				}
			}
			v3.push_back(max_cnt); 
		}
		// 벡터에서 여러개 최댓값 구하는건 *max_element
		int ans = *max_element(v3.begin(), v3.end());

		cout << "#" << i << ' ';

		for (int j = 0; j < v3.size(); j++) {
			if (v3[j] == ans) 
				cout << j + 2 << ' '; // +2를 생각 못함. mapping
		}
		cout << "\n";
	}
	return 0;
}