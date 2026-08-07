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

	int len1 = str1.length();
	int len2 = str2.length();

	bool flag = false;

	if (len1 == len2) {
		for (int i = 0; i < len1; i++) {
			if (str1[i] == str2[i]) {
				flag = true;
			}
			else {
				flag = false;
				break;
			}
		}
	}
	

	if (flag) {
		cout << "같음";
	}
	else {
		cout << "다름";
	}
	
	return 0;
}