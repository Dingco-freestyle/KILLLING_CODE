// SWEA D3 8741번 - 두문자어
// getline 사용법, toupper()

#include <iostream>
using namespace std;
#include <string>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	cin.ignore(); // for문 밖에서 한 번만.

	for (int i = 1; i <= T; i++) {
		string s;

		getline(cin, s);
		string tmp = "";

		// 문자열을 공백으로 나누고 공백이 나온 
		// 다음의 문자를 대문자로 바꾸기
		for (int j = 0; j < s.length(); j++) {
			char c;
			if (j == 0) {
				c = toupper(s[j]);
				tmp += c;
			}
			else if (s[j] == ' ') {
				c = toupper(s[j+1]);
				tmp += c;
			}
		}
		cout << "#" << i << ' ';

		for (auto c : tmp)
			cout << c;

		cout << "\n";
	}
	return 0;
}