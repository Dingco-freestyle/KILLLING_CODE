// SWEA D3 1220번 - Magenetic

#include <iostream>
using namespace std;
#include <vector>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int TC = 10;

	for (int t = 1; t <= TC; t++) {
		int N;
		cin >> N;
		vector<vector<int>> arr(N, vector<int>(N, 0));
		int cnt = 0;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> arr[i][j];
			}
		}

		for (int j = 0; j < N; j++) {
			bool flag = false;
			for (int i = 0; i < N; i++) {
				if (arr[i][j] == 1)
					flag = true;
				else if (arr[i][j] == 2 && flag) {
					cnt += 1;
					flag = false;
				}
			}
		}
		cout << "#" << t << ' ' << cnt << "\n";
	}
	return 0;
}