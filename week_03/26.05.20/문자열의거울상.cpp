// SWEA D3 10804번 - 문자열의 거울상

#include <iostream>
using namespace std;
#include <string>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		string s = "";
		cin >> s; // ‘b', 'd', 'p',‘q’로 이루어진 문자열
				 // ex) bdppq --> pqqbd

		cout << "#" << i << ' ';

		for(int j = s.length() - 1; j >= 0; j--){
			if (s[j] == 'b')
				cout << 'd';

			else if (s[j] == 'd')
				cout << 'b';

			else if (s[j] == 'p')
				cout << 'q';

			else if (s[j] == 'q')
				cout << 'p';
		}
		cout << "\n";
	}
	return 0;
}