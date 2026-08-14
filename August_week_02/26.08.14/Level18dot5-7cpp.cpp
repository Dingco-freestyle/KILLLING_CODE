#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str = "MINCODING";

	char c[10];
	int cnt[26] = { 0 };
	

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}

	for (int i = 0; i < str.length(); i++) {
		cnt[str[i]] = 1;
	}

	for (int i = 0; i < n; i++) {
		if (cnt[c[i]] == 1)
			cout << "O";
		else
			cout << "X";
	}
	
	return 0;
}