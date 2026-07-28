#include <iostream>
using namespace std;

char getChar() {
	char a, b;
	cin >> a >> b;

	char ans;

	if (a > b)
		ans = a;
	else
		ans = b;

	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char C = getChar();

	cout << C;

	return 0;
}
