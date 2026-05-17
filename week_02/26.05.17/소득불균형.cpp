// SWEA D3 10505번 - 소득 불균형 

#include <iostream>
using namespace std;
#include <vector>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int N;
		cin >> N;

		vector<int> V;
		int sum = 0, avg = 0, cnt = 0;

		for (int j = 0; j < N; j++) {
			int p;
			cin >> p;
			V.push_back(p);
			sum += p;
		}
		avg = sum / N;

		for (auto P : V) {
			if (P <= avg) 
				cnt += 1;	
		}
		cout << "#" << i << ' ' << cnt << "\n";
	}
	return 0;
}