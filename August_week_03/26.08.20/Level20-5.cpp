#include <iostream>
using namespace std;

char arr[5];

void abc(int a) {

	if (a == 5) {
		cout << endl;
		return;
	}
	cout << arr[a];
	abc(a + 1);
	cout << arr[a];
}

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	abc(0);

	return 0;
}