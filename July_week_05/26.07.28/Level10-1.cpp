#include <iostream>
using namespace std;

int one() {
	int x;
	cin >> x;

	return x;
}

char two() {
	char c;
	cin >> c;

	return c;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a = one();
	char c = two();

	cout << a << c;

	return 0;
}