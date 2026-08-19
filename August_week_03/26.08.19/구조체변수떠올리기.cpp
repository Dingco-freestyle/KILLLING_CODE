#include <iostream>
using namespace std;

struct Data {
	int x, y, z;
};

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	Data a, b;

	cin >> a.x >> a.y >> a.z;
	cin >> b.x >> b.y >> b.z;

	cout << a.x + b.x << "\n";
	cout << a.y + b.y << "\n";
	cout << a.z + b.z ;


	return 0;
}