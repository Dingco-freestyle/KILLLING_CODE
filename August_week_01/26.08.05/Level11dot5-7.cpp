#include <iostream>
using namespace std;

char arr[3][3] = { {'a', 'b', 'd'}, {'e', 'w', 'z'}, {'q', 'v', 'a'} };

void Process(char c) {
	char lowerC = tolower(c);

	bool flag = false;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (lowerC == arr[i][j]) {
				flag = true;
				break;
			}
		}
		if (flag == 1) break;
	}

	if (flag) {
		cout << "존재";
	}
	else {
		cout << "없음";
	}
}

void Input() {
	char c;
	cin >> c;

	Process(c);
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	Input();

	return 0;
}