#include <iostream>
using namespace std;

char Calculator() {
	int score;
	cin >> score;

	if (score >= 90) {
		return 'A';
	}
	else if (score >= 80 && score < 90) {
		return 'B';
	}
	else if (score >= 70 && score < 80) {
		return 'C';
	}
	else {
		return 'D';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char ret = Calculator();

	cout << ret;

	return 0;
}