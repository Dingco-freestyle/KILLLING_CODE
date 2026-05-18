// SWEA D3 16910번 - 원 안의 점
// x^2 + y^2 <= r^2

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int N; // 반지름
		cin >> N;
		int cnt = 0;

		// 기본 원 내부 탐색 알고리즘 시복 : O(N^2)
		for (int x = -N; x <= N; x++) {
			for (int y = -N; y <= N; y++) {
				if (x * x + y * y <= N * N)
					cnt += 1;
			}
		}
		cout << "#" << i << ' ' << cnt << "\n";
	}
	return 0;
}

/*
		효율적인 풀이 : 시복 O(n)
		1사분면 내부에 있는 점의 갯수 카운팅
		for (int x = 1; x <= N; x++) {
			int y_max = (int)sqrt(N * N - x * x);
			cnt += y_max;
		}
		cnt = cnt * 4; // 1~4사분면의 점의 갯수
		cnt += 4 * N + 1; 축 위의 점 개수 + 원점(0,0)
*/