#include <iostream>
using namespace std;

char arr[8] = { 'M', 'I', 'N', 'Q', 'U', 'E', 'S', 'T' };

int Length(char c) {
	int ret = 0;

	for (int i = 0; i < 8; i++) {
		if (c == arr[i])
			ret = i;
	}
	return ret;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char A, B, C;
	cin >> A >> B >> C;

	int M = Length(A);
	int S = Length(B);
	int T = Length(C);

	cout << A << "=" << M << "\n";
	cout << B << "=" << S << "\n";
	cout << C << "=" << T;

	return 0;
}