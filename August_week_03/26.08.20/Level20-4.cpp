#include <iostream>
using namespace std;

void abc(int a, int cnt) {

	if (cnt == 3) {
		cout << a << " ";
		return;
	}
	abc(a + 2, cnt + 1);
	cout << a << " ";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int cnt = 0;
	cin >> n;

	abc(n, cnt);

	return 0;
}