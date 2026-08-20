#include <iostream>
using namespace std;



struct sketchbook {
	char str[3][4];
};

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	
	sketchbook a;
	int cnt[26] = { 0 };
	char c;

	for (int i = 0; i < 3; i++) {
		cin >> a.str[i];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			c = a.str[i][j];
			cnt[c] = 1;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (cnt[i] == 1) {
			cout << (char)i;
		}
	}

	

	return 0;
}