// SWEA D3 10570번 - 제곱 팰린드롬 수

#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

// 회문 검사 알고리즘
bool Palindrome(string s) {
	string tmp = s;
	reverse(tmp.begin(), tmp.end());
	return s == tmp;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int TC;
	cin >> TC;

	for (int i = 1; i <= TC; i++) {
		int A, B;
		cin >> A >> B;

		int cnt = 0;

		for (int j = 1; j * j <= B; j++) {

			// j 회문검사
			if (!Palindrome(to_string(j))) continue;

			// j의 제곱근 회문검사
			int sq = j * j;
			if (sq >= A && sq <= B && Palindrome(to_string(sq))) {
				cnt += 1;
			}
		}
		cout << "#" << i << ' ' << cnt << "\n";
	}
	return 0;
}