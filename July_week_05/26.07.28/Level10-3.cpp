#include <iostream>
using namespace std;

int chicken() {
	int x;
	cin >> x;

	return x;
}

char coke() {
	char c;
	cin >> c;

	return c;
}

void KFC() {
	int a = chicken() + 10;
	char b = coke();

	cout << a << b;
}


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	KFC();

	return 0;
}
