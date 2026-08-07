#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str1, str2;
	string str3;
	cin >> str1 >> str2;

	str3 = str1;

	reverse(str3.begin(), str3.end());

	if (str2 == str3) {
		cout << "거울문장";
	}
	else {
		cout << "거울문장아님";
	}

	return 0;
}