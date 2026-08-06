#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	for (int i = x; i > x - 4; i--) {
		for (int j = 0; j < 4; j++) {
			cout << i;
		}
		cout << "\n";
	}

	return 0;
}