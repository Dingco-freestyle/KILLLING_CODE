#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int cnt[27] = { 0 };
	int count = 0;

	for (int i = 0; i < str.length(); i++) {
		cnt[str[i] - 'A'] ++;
	}

	for (int i = 0; i < 27; i++) {
		if (cnt[i] != 0) {
			count++;
		}
	}

	cout << count << "°³";

	return 0;
}