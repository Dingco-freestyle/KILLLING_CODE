#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
#include <algorithm>

vector<vector<int>> v;
int visited[16];
int sum_foodA, sum_foodB;
int ans;
int N;

void func(int level, int idx) {
	// level은 재료 개수
	// idx는 재료 인덱스

	if (level == N / 2) {


		sum_foodA = 0;
		sum_foodB = 0;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {

				// 핵심 중요 코드

				if (visited[i] && visited[j])
					sum_foodA += v[i][j];

				if (!visited[i] && !visited[j])
					sum_foodB += v[i][j];
			}
		}

		// 두 음식의 맛의 차이가 최솟값 찾기
		ans = min(ans, abs(sum_foodA - sum_foodB));

		return;
	}

	for (int i = idx; i < N; i++) {

		if (visited[i])
			continue;

		visited[i] = 1;
		func(level + 1, i + 1);
		visited[i] = 0;

	}
}


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {

		cin >> N;

		v.assign(N, vector<int>(N));

		// 입력
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> v[i][j];
			}
		}

		ans = 999;

		func(0, 0);

		cout << "#" << tc << " " << ans << "\n";
	}
	return 0;
}