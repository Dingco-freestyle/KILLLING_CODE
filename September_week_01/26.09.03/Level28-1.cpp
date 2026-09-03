#include <iostream>
using namespace std;
#include <vector>
#include <string>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<string> v = { "Amy", "Bob", "Chole", "Diane", "Edger" };

	vector<vector<int>> v2(5, vector<int>(5, 0));

	v2[1][0] = 1;
	v2[0][4] = 1;
	v2[3][1] = 1;
	v2[2][1] = 1;

	int max_val = 0;
	int max_idx = 0;

	int sum;
	for (int j = 0; j < 5; j++) {
		sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += v2[i][j];
		}

		if (max_val < sum) {
			max_val = sum;
			max_idx = j;
		}
	}

	cout << v[max_idx];

	return 0;
}