// SWEA D3 1225번 - 암호 생성기
// 전형적인 Queue 자료구조 응용

#include <iostream>
using namespace std;
#include <queue>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int TC = 10;
	

	for (int t = 1; t <= TC; t++) {
		int test_case;
		cin >> test_case;

		queue<int> Q;

		for (int i = 0; i < 8; i++) {
			int num;
			cin >> num;
			Q.push(num);
		}

		int cnt = 1;
		while(Q.back() != 0){
			int p;
			p = Q.front() - cnt;
			cnt += 1;
			Q.pop();

			if (p < 0)
				p = 0;

			Q.push(p);

			if (cnt > 5)
				cnt = 1;
		}
		cout << "#" << t << ' ';
		while (!Q.empty()) {
			cout << Q.front() << ' ';
			Q.pop();
		}
		cout << "\n";
	}
	return 0;
}