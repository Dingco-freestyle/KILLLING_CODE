#include <iostream>
using namespace std;

int arr[6] = { 0 };

void BBQ(int a) {

	cout << arr[a] << " " ;

	if (a == 5) {
		return;
	}

	BBQ(a + 1);

	cout << arr[a] << " ";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}

	BBQ(0);

	return 0;
}