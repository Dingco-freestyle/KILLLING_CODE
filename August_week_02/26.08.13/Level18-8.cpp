#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int train[] = { 3, 7, 6, 4, 2, 9, 1, 7 };
	int team[3];

	cin >> team[0] >> team[1] >> team[2];

	int start = 0;
	int end = 0;

	for (int i = 0; i < 8; i++) {
		if (team[1] == train[i]) {
			start = i - 1;
			end = i + 1;
		}
	}

	cout << start << "¹ø~" << end << "¹ø Ä­";

	return 0;
}