#include <iostream>
using namespace std;

#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	char A, B, C;
	cin >> A >> B >> C;

	int len = str.length();

	int cntA = 0, cntB = 0, cntC = 0;

	for (int i = 0; i < len; i++) {
		if (A == str[i]) {
			cntA += 1;
		}
		else if (B == str[i]) {
			cntB += 1;
		}
		if (C == str[i]) {
			cntC += 1;
		}
	}

	cout << A << "=" << cntA << "\n";
	cout << B << "=" << cntB << "\n";
	cout << C << "=" << cntC << "\n";
	

	return 0;
}