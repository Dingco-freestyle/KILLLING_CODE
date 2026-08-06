#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str1 = "DATAPOWER";

	// 배열 크기를 미리 정해줘야 한다.
	string str2[9];
	
	int a, b;
	cin >> a >> b;

	int len = 0;

	for (int i = a; i <= b; i++) {
		str2[len++] = str1[i];
	}

	for (auto c : str2) {
		cout << c;
	}

	return 0;
}