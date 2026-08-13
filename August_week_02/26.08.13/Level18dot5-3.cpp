#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int cnt[26] = { 0 };

	for (int i = 0; i < str.length(); i++){
		cnt[str[i] - 'A']++;
	}

	int max = 0;
	int maxIdx = 0;

	for (int i = 0; i < 26; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			maxIdx = i;
		}
	}

	cout <<  (char)('A' + maxIdx);

	return 0;
}