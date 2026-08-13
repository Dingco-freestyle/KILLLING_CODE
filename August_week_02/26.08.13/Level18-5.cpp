#include <iostream>
using namespace std;
#include <string>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int cnt[27] = { 0 };

	for (int i = 0; i < str.length(); i++) {
		cnt[str[i] -'A']++;
	}

	int max = 0;
	int maxIndex = 0;

	for (int i = 0; i < 27; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			maxIndex = i;
		}
	}

	// 이 한 줄을 생각을 못했네......
	cout << char('A' + maxIndex);

	return 0;
}