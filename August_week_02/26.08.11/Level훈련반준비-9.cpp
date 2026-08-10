#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[2][3];
	int tmp[2][3];
	vector<int> v;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			v.push_back(arr[i][j]);
		}
	}

	sort(v.begin(), v.end());

	int idx = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			tmp[i][j] = v[idx++];
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << tmp[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}