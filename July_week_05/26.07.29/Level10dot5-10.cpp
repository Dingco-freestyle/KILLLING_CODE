#include <iostream>
using namespace std;

int arr[7][5] = { {1, 0, 0, 0, 0}, {1, 0, 1, 0, 0},
				  {1, 1, 0, 1, 0}, {1, 0, 1, 0, 0 },
				  {0, 1, 0, 0, 1}, {0, 0, 0, 1, 0},
	              {1, 1, 0, 0, 0} };

void OUTPUT(int cnt) {

	cout << cnt;
}

int PROCESS(int num) {
	int count = 0;

	for (int i = 0; i < 7; i++) {
		if (arr[i][num] == 1) {
			count += 1;
		}
	}
	return count;
}

int INPUT() {
	int x;
	cin >> x;

	return x;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = INPUT();
	int cnt = PROCESS(t);
	OUTPUT(cnt);


	return 0;
}