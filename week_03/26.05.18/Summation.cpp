// SWEA D3 8658번 - Summation

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
		vector<int> v;
		vector<int> v2;
		
		for (int j = 0; j < 10; j++) {
			int p;
			cin >> p;
			v.push_back(p);
		}

		// (**중요**)
		// string을 사용해서 한 자리씩 계산하기 보다
		// x % 10 --> x /= 10 알고리즘을 사용해 각 자리수를 구한다.
		for (int j = 0; j < v.size(); j++) {
			int sum = 0;
			while (v[j] > 0) {
				sum += v[j] % 10;
				v[j] /= 10;
			}
			v2.push_back(sum);
		}
		sort(v2.begin(), v2.end());
		int min = v2[0];
		int max = v2[v2.size()-1];

		cout << "#" << i << ' ' << max << ' ' << min << "\n";
	}
	return 0;
}