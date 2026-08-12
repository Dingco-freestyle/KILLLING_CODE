#include <iostream>
using namespace std;
#include <string>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;

	cin >> str;

	char a, b;
	cin >> a >> b;

	for (int i = 0; i < str.length(); i++) {
		// 문장에 문자 a가 있으면
		if (a == str[i]) {
			// 문자 a인 부분을 문자 b로 치환하라
			str[i] = b;
		}
	}

	cout << str;

	return 0;
}