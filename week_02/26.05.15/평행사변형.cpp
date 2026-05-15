#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;
		int S = N * N;
		
		cout << "#" << t << ' ' << S << "\n";
	}
	return 0;
}