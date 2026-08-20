#include <iostream>
using namespace std;
int arr[8] = { 3, 7, 4, 1, 9, 4, 6, 2 };

void BBQ(int a) {

	cout << arr[a] << ' ';

	if (a == 0) {
		return;
	}
	
	BBQ(a - 1);
	cout << arr[a] << ' ';

}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int idx;
	cin >> idx;

	BBQ(idx);
	
	return 0;
}