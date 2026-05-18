// SWEA D3 6913번 - 동철이의 프로그래밍 대회

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	int score[20];

	for (int i = 1; i <= T; i++) {
		int N; // 1 ~ N
		int M; // 1 ~ M
		cin >> N >> M;

		int tmp;
		int max = 0;
		int victory = 0;

		for (int j = 0; j < N; j++) {
			score[j] = 0;
			for (int k = 0; k < M; k++) {
				cin >> tmp;
				score[j] += tmp;
			}
			if (score[j] > max)
				max = score[j];
		}
		for (int j= 0; j < N; i++) {
			if (score[j] == max)
				victory++; //1등 수 
		}
		cout << "#" << i << ' ' << victory << ' ' << max << "\n";
	}
	return 0;
}
	