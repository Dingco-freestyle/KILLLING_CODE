#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[3][5] = { {'a', 'b', 'a', 'c', 'z'}, {'c', 't', 'a', 'c', 'd'}, {'c', 'c', 'c', 'c', 'a'} };

	char c;
	cin >> c;
	
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (c == arr[i][j]) {
				cnt += 1;
			}
		}
	}
	if (cnt >= 7) {
		cout << "세상에";
	}
	else if (cnt >= 5 && cnt <= 7) {
		cout << "와우";
	}
	else if (cnt >= 3 && cnt <= 5) {
		cout << "이야";
	}
	else {
		cout << "이런";
	}

	return 0;
}