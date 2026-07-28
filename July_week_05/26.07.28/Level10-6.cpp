#include <iostream>
using namespace std;

void printData(int z) {
	cout << z << "\n";
}

void even(int x) {
	int ans = x * 2;
	
	printData(ans);
}

void odd(int y) {
	int ans = y - 10;

	printData(ans);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	if ((a / b) % 2 == 0) {
		even(a/b);
	}
	else if ((a / b) % 2 != 0) {
		odd(a/b);
	}

	printData(a + b);

	return 0;
}
