#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;

	cin >> str;

	for (int i = 0; i < 5; i++) {
		cout << str << "\n";
	}

	return 0;
}