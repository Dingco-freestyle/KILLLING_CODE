#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	cin >> a >> b >> c;

	for (int j = 0; j < c; j++) {
		for (int i = a; i <= b; i++) {
			cout << i << ' ';
		}
		cout << "\n";
	}
	

	return 0;
}