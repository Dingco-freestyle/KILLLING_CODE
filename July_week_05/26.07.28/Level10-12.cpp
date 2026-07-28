#include <iostream>
using namespace std;

int INPUT() {
	int a;
	cin >> a;

	return a;
}

void CountDown(int b) {
	for (int i = b; i >= 1; i--) {
		cout << i << " ";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int ret = INPUT();

	CountDown(ret);

	return 0;
}