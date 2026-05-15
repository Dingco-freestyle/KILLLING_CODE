// 간단한 압축 풀기

#include <iostream>
using namespace std;
#include <vector>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int N;
		cin >> N;

		int length = 0;
		string s = "";

		for (int j = 0; j < N; j++) {
			char C;
			int K; // 1 ~ 20
			cin >> C >> K;

			for (int k = 0; k < K; k++) {
				s += C;
				length++;

				if (length == 10) {
					s += "\n";
					length = 0;
				}
			}
		}
		cout << "#" << i << "\n";
		cout << s;
		cout << "\n";
	}
	return 0;
}