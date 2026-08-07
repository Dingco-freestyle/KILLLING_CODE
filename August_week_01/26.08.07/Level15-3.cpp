#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[6];
	
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}

	bool flag = false;

	for (int i = 1; i < 6; i++) {
		if (abs(arr[i-1] - arr[i]) >= 3) {
			flag = true;
			break;
		}
		else {
			flag = false;
		}
	}

	if (flag) {
		cout << "재배치필요";
	}
	else {
		cout << "완벽한배치";
	}

	return 0;
}