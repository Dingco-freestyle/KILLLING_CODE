// SWEA D3 5549번 - 홀수일까 짝수일까

#include <iostream>
using namespace std;
#include <string>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {

		string s;
		cin >> s;

		cout << "#" << i << ' ';

		if ((s[s.length() - 1] - '0') % 2 == 0) {
			cout << "Even" << "\n";
		}
		else if ((s[s.length() - 1] - '0') % 2 != 0) {
			cout << "Odd" << "\n";
		}
	}
	return 0;
}