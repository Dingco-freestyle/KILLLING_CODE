#include <iostream>
using namespace std;

struct PROJECT{
	int num;
	char id;
	int vect[4];
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	PROJECT z;

	int num;
	cin >> num;

	if (num >= 0 && num <= 9) {
		z = { 5, 'Z', {1, 2, 3, 4} };
	}
	else if (num >= 10 && num <= 99) {
		z = { 8, 'T', {5, 1, 2, 3} };
	}
	else if (num >= 100) {
		z = { 10, 'Q', {9, 1, 6, 2} };
	}
	else {
		cout << 0;
	}
	
	cout << z.num << "\n";
	cout << z.id << "\n";
	for (int a : z.vect) {
		cout << a << ' ';
	}

	return 0;
}