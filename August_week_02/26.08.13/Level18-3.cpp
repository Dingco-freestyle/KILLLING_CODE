#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][5] = {
	{1, 3, 3, 5, 1},
	{3, 6, 2, 4, 2},
	{1, 9, 2, 6, 5}
	};

	int N;
	cin >> N;

	int cnt[10] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cnt[arr[i][j]]++;
		}
	}

	for (int i = 0; i < 10; i++) {
		if (N == cnt[i]) {
			cout << i << " ";
		}
	}

	return 0;
}