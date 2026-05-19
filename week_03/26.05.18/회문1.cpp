// SWEA D3 1215번 - 회문1

#include <iostream>
using namespace std;
#include <vector>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T = 10;

	for (int i = 1; i <= T; i++) {
		int cnt = 0;
		vector<vector<char>> V(8, vector<char>(8, 0));

		int len; // 회문 길이
		cin >> len;

		for (int j = 0; j < 8; j++) {
			for (int k = 0; k < 8; k++) {
				cin >> V[j][k]; // A or B or C 만 입력	
			}
		}

		// 행방향 : j , 열방향 : k
		// 가로(열방향) 검사 --> k를 조작해야함
		for (int j = 0; j < 8; j++) {
			for (int k = 0; k <= 8 - len; k++) {
				bool flag = true;

				for (int m = 0; m < len / 2; m++) {
					if (V[j][k + m] != V[j][k + len - 1 - m]) {
						flag = false;
						break;
					}
				}
				if (flag)
					cnt += 1;
			}
		}

		// 행방향 : j , 열방향 : k
		// 세로(행방향) 검사 --> j를 조작해야함
		for (int j= 0; j <= 8 - len; j++) {
			for (int k = 0; k < 8; k++) {
				bool flag = true;

				for (int m = 0; m < len / 2; m++) {
					if (V[j + m][k] != V[j + len - 1 - m][k]) {
						flag = false;
						break;
					}
				}
				if (flag)
					cnt += 1;
			}
		}
		cout << "#" << i << ' ' << cnt << "\n";
	}
	return 0;
}