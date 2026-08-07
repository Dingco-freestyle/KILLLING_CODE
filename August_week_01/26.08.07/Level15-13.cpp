#include <iostream>
using namespace std;
#include <algorithm>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[2][6] = { "DATAW", "BBQK" };

	int x;
	cin >> x;

	if (x % 2 != 0) {
		sort(arr[0], arr[0] + 5);
	}
	else {
		sort(arr[1], arr[1] + 4);
	}

	for (int i = 0; i < 2; i++) {
		cout << arr[i] << "\n";
	}	
	return 0;
}