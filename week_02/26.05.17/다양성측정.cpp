// SWEA D3 7728번 - 다양성 측정
// Set은 중복을 자동으로 걸러준다

#include <iostream>
using namespace std;
#include <set>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int cnt = 0;
		string s = "";
		cin >> s;

		set<char> S;

		for (auto c : s) {
			// if(S.find(c) == S.end())
			// set은 자동으로 중복을 거르기 때문에 불필요한 코드
			S.insert(c);
			// cnt += 1;
		}
		cnt = S.size();
		cout << "#" << i << ' ' << cnt << "\n";
	}
	return 0;
}