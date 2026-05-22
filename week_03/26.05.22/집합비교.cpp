// SWEA D3 24420번 - 집합 비교

#include <iostream>
using namespace std;
#include <set>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		set<int> SA;
		set<int> SB;

		int size_A, size_B;
		cin >> size_A >> size_B;

		for (int i = 0; i < size_A; i++) {
			int pA;
			cin >> pA;
			SA.insert(pA);
		}
		for (int i = 0; i < size_B; i++) {
			int pB;
			cin >> pB;
			SB.insert(pB);
		}

		if (SA == SB) {
			cout << '='  << "\n";
			continue;
		}

		bool A_in_B = true;
		for (int x : SA) {
			if (SB.find(x) == SB.end()) {
				A_in_B = false;
				break;
			}
		}

		bool B_in_A = true;
		for (int x : SB) {
			if (SA.find(x) == SA.end()) {
				B_in_A = false;
				break;
			}
		}
		if (A_in_B)
			cout << '<' << "\n";
		else if (B_in_A)
			cout << '>' << "\n";
		else
			cout << '?' << "\n";
	}
	return 0;
}