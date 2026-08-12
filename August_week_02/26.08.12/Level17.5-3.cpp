#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str1, str2;

	cin >> str1 >> str2;

	if (str1 == str2) {
		cout << "동명";
	}
	else {
		cout << "남남";
	}

	return 0;
}