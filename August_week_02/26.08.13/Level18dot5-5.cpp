#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str = "ATKPTCABC";
	
	char a, b;
	cin >> a >> b;

	int start = 0, end = 0;

	for (int i = 0; i < str.length(); i++) {
		if (a == str[i]) {
			start = i;
			break;
		}
			
	}

	for (int i = str.length() - 1; i >= 0; i--) {
		if (b == str[i]) {
			end = i;
			break;
		}
			
	}

	cout << abs(end - start);

	return 0;
}
