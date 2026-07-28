#include <iostream>
using namespace std;

char aToZ() {
	char c;
	cin >> c;

	if (c <= 'M') {
		return 'A';
	}
	else {
		return 'Z';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char c = aToZ();

	cout << c;

	return 0;
}