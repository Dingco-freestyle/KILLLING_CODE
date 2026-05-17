// SWEA D3 4406번 - 모음이 보이지 않는 사람
// 모음 : a, e, i, o, u

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
		cout << "#" << i << ' ';
		for (auto c : s) {
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
				continue;
			cout << c;
		}
		cout << "\n";
	}
	return 0;
}