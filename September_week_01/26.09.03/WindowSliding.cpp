#include <iostream>
using namespace std;
#include <vector>

int main() {

	int N;
	cin >> N;

	vector<vector<int>> v(N, vector<int>(N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> v[i][j];
		}
	}

	int max = 0;

	for (int i = 0; i <= N - 3; i++) {
		for(int j = 0; j <= N - 3; j++){

			int sum = 0;

			for (int y = i; y < i + 3; y++) {
				for (int x = j; x < j + 3; x++) {
					sum += v[y][x];
				}
			}
			if (max < sum) {
				max = sum;
			}
		}
	}

	cout << max;

	return 0;
}