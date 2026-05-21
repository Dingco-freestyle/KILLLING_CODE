// SWEA D3 8500¹ø - ±ØÀå ÁÂ¼®

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		vector<int> V;
		int N; // »ç¶÷ ¼ö
		cin >> N;

		int sum = 0;
		for (int j = 0; j < N; j++) {
			int A;
			cin >> A;
			V.push_back(A);
		}
		sort(V.begin(), V.end(), greater<int>());
		
		sum += N;
		sum += V[0];
		for (auto a : V) {
			sum += a;
		}
		cout << "#" << i << ' ' << sum << "\n";
	}
	return 0;
}