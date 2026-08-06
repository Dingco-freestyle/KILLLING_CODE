#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[3][3]{ {'a', 'b', 'E'}, {'E', 2, 'W'}, {3, 2, 4} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			if (arr[i][j] >= 'A' && arr[i][j] <= 'Z')
				cout << (char)tolower(arr[i][j]) << ' ';

			else if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
				cout << (char)toupper(arr[i][j]) << ' ';

			else
				cout << (int)arr[i][j] + 5 << ' ';

		}
		cout << "\n";
	}
	return 0;
}

