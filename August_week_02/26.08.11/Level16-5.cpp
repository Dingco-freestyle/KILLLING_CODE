#include <iostream>
using namespace std;
#include <string>

// erase ¸Þ¼­µå

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int idx;
	cin >> idx;

	str.erase(str.begin() + idx);

	cout << str;

	return 0;
}