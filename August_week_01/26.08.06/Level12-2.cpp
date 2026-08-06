#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str1;
	string str2;

	cin >> str1;
	cin >> str2;

	int str1_len = str1.length();
	int str2_len = str2.length();

	cout << str1_len << " " << str2_len;

	return 0;
}