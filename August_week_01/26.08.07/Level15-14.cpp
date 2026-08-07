#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[3][20] = { "POTIO", "ABCDE", "YOURE" };

	int a, b;
	cin >> a >> b;

	for (int i = 0; i < 3; i++) {
		for (int j = a; j <= b; j++) {
			cout << arr[i][j];
		}
	}

	return 0;
}