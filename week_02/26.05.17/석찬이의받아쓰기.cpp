// SWEA D3 9317번 - 석찬이의 받아쓰기

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int TC;
	cin >> TC;

	for (int i = 1; i <= TC; i++) {
		int N;
		cin >> N;

		string s1 = "";
		string s2 = "";
		for (int j = 0; j < N; j++) {
			char c1;
			cin >> c1;
			s1 += c1;
		}
		for (int j = 0; j < N; j++) {
			char c2;
			cin >> c2;
			s2 += c2;
		}
		int cnt = 0;
		
		for (int j = 0; j < N; j++) {
			if (s1[j] == s2[j])
				cnt += 1;
		}
		cout << "#" << i << ' ' << cnt << "\n";
	}
	return 0;
}