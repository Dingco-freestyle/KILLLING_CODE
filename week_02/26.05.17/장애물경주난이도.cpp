// SWEA D3 6730번 - 장애물 경주 난이도

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

		for (int j = 0; j < N; j++) {
			int p;
			cin >> p;
			V.push_back(p);
		}

		int max_up = 0, max_down = 0;

		for (int k = 1; k < N; k++) {
			if (V[k - 1] < V[k]) {
				if ((V[k] - V[k - 1]) > max_up)
					max_up = V[k] - V[k - 1];
			}
			else if (V[k - 1] > V[k]) {
				if ((V[k - 1] - V[k]) > max_down)
					max_down = V[k - 1] - V[k];
			}
		}
		cout << "#" << i << ' ' << max_up << ' ' << max_down << "\n";
	}
	return 0;
}
