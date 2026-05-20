// SWEA D3 2805번 - 농작물 수확하기

#include <iostream>
using namespace std;
#include <vector>
#include <string>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		int N; // 항상 홀수..1,3,5,7 ~ 49까지
		cin >> N;
		vector<vector<int>> arr(N, vector<int>(N, 0));

		for (int i = 0; i < N; i++) {
			string S1 = "";
			cin >> S1;
			for (int j = 0; j < N; j++) {
				arr[i][j] = S1[j] - '0';
			}
		}

		int mid = N / 2;
		int sum = 0;

		// (핵심)
		// 마름모 합 구하기
		for (int i = 0; i < N; i++) {

			int start = abs(mid - i);
			int end = N - start - 1;
				
			for (int j = start; j <= end; j++) {
				sum += arr[i][j];
			}
		}
		cout << "#" << t << ' ' << sum << "\n";
	}
	return 0;
}