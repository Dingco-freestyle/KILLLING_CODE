// SWEA D3 1289번 - 원재의 메모리 복구하기

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	
	for (int i = 1; i <= T; i++) {
		string s;
		cin >> s;

		int cnt = 0;

		if (s[0] == '1')
			cnt ++;

		for (int j = 1; j < s.length(); j++) {
			if (s[j - 1] != s[j])
				cnt ++;
		}
		cout << "#" << i << ' ' << cnt << "\n";
	}
	return 0;
}