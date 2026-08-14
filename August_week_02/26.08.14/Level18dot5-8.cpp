#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str1, str2, str3;
	cin >> str1 >> str2 >> str3;

	int cnt[26] = { 0 };

	for (char c : str1) {
		cnt[c - 'A']++;
	}

	for (char c : str2) {
		cnt[c - 'A']++;
	}

	for (char c : str3) {
		cnt[c - 'A']++;
	}

	bool flag = false;

	for (int i = 0; i < 26; i++) {
		if (cnt[i] >= 2){
			flag = true;
			break;
		}
	}
	 
	if (flag) {
		cout << "No";
	}
	else {
		cout << "Perfect";
	}

	return 0;
}