#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str1;
	cin >> str1;

	int len = str1.length();

	bool flag = false;

	for (int i = 1; i < len; i++) {
		if ((str1[i - 1] >= 'A' && str1[i - 1] <= 'Z') && (str1[i] >= 'a' && str1[i] <= 'z') || 
			(str1[i - 1] >= 'a' && str1[i - 1] <= 'z') && (str1[i] >= 'A' && str1[i] <= 'Z')) {
			flag = true;
		}
		else {
			flag = false;
			break;
		}
	}

	if (flag)
		cout << "개구리문장";
	else
		cout << "일반문장";

	return 0;
}