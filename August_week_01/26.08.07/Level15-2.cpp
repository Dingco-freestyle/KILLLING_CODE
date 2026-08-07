#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x; // 1000 ~ 9999

	int a = x / 1000;
	int b = (x / 100) % 10;
	int c = (x / 10) % 10;
	int d = x % 10;

	cout << "숫자" << a << "\n";
	cout << "숫자" << b << "\n";
	cout << "숫자" << c << "\n";
	cout << "숫자" << d << "\n";

	

	return 0;
}