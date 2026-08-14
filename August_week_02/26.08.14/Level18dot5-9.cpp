#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int cnt[26] = { 0 };

 	for (int i = 0; i < str.length(); i++) {
		cnt[str[i] - 'A']++;
 	}

	for (int i = 0; i < 26; i++) {
		if (cnt[i] > 0) {
			cout << (char)(i + 'A');
		}
	}

	return 0;
}