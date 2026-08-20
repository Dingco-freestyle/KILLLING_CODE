#include <iostream>
using namespace std;

void BBQ(int a) {

	cout << a << " ";

	if (a == 0)
		return;

	BBQ(a - 1);

	cout << a << " ";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	BBQ(n);

	return 0;
}