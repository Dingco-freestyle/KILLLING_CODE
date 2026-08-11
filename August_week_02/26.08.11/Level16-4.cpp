#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr1[4];
	int arr2[4];
	int result[4];

	for (int i = 0; i < 4; i++) {
		cin >> arr1[i];
	}

	for (int i = 0; i < 4; i++) {
		cin >> arr2[i];
	}

	for (int i = 0; i < 4; i++) {
		result[i] = arr1[i] + arr2[3 - i];
	}

	/*
	¹¹ ÀÌ°Íµµ ±¦ÂúÀ½
	int t = 3;
	for (int i = 0; i < 4; i++) {
		res[i] = arrA[i] + arrB[t];
		t--;
	}
	*/

	for (int a : result) {
		cout << a << " ";
	}

	return 0;
}