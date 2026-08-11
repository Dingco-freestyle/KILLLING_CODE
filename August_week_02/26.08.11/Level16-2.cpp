#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][4] = { {'A', 'B', 'K', 'T'}, {'K', 'F', 'C', 'F'},
					  {'B', 'B', 'Q', 'Q'}, {'T', 'P', 'Z', 'F'} };

	char a, b;
	cin >> a >> b;

	int cnt = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (a == arr[i][j] || b == arr[i][j]) {
				cnt += 1;
			}
		}
	}

		cout << cnt;

	return 0;
}