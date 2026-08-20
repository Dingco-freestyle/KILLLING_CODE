#include <iostream>
using namespace std;

void bbq(int a, int b) {
	cout << a << ' ';

	if (a == b) {
		return;
	}
	bbq(a + 1, b);

	cout << a << ' ';

}

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	bbq(a, b);

	return 0;
}