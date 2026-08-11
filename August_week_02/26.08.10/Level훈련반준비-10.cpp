#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[3][5] = { {'F', 'R', 'Q', 'W', 'T'}, 
						{'G', 'A', 'S', 'Y', 'Q'},
		               {'A', 'S', 'A', 'D', 'B'} };

	int x; 
	cin >> x;

	for (int i = 0; i < 3; i++) {
		cout << arr[i][x];
	}
	
	return 0;
}