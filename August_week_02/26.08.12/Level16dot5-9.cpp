#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	char c;

	cin >> a >> b >> c;

	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < a; j++) {
			for (int k = 0; k < b; k++) {
				cout << c;
			}
			cout << "\n";
		}
		cout << "\n";
	}

	return 0;
}