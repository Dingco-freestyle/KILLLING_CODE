// SWEA D3 9997번 - 미니멀리즘 시계

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int theta;
		cin >> theta;

		int hour = 0;
		int min = 0;

		for (int j = 0; j < theta; j++) {
			min += 2;

			if (min == 60) {
				hour += 1;
				min = 0;
			}
		}
		cout << "#" << i << ' ' << hour << ' ' << min << "\n";
	}
	return 0;
}