#include <iostream>
using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][3];
	

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	int cnt[10] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cnt[arr[i][j]]++;
		}
	}

	for (int i = 1; i < 10; i++) {
		if (cnt[i] == 0) {
			cout << i << " ";
		}
	}

	return 0;
}