#include <iostream>
using namespace std;

void func(int a){

	if (a == 0)
		return;

	func(a / 2);
	cout << a << ' ';
}

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	func(n);

	return 0;
}