#include <iostream>
using namespace std;

void BBQ(int *a,  int *b) {
	int arr[5] = { 0 };
	

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
			
		}
		if (min > arr[i]) {
			min = arr[i];
			
		}
	}
	*a = max;
	*b = min;
}


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a = 0, b = 0;

	BBQ(&a, &b);

	cout << "a=" << a << endl;
	cout << "b=" << b;

	return 0;
}