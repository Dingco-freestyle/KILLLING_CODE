#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string str1, str2;
	cin >> str1 >> str2;

	int cnt = 0;

	int len = max(str1.length(), str2.length());

	for (int i = 0; i < len; i++) {
		if (str1[i] != str2[i]) {
			cnt += 1;

		}
	}
	
	cout << cnt;
	return 0;
}