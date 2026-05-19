// SWEA D3 3314번 - 보충학습과 평균

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {

		int sum = 0;
		for (int j = 0; j < 5; j++) {
			int score;
			cin >> score;
			
			if (score < 40)
				score = 40;
			sum += score;
		}
		
		cout << "#" << i << ' ' << sum / 5 << "\n";
	}
	return 0;
}