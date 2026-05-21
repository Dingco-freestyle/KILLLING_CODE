// SWEA D3 1230번 - 암호문3
// list 활용 어렵다

// 벡터로 풀 경우 시간 초과

#include <iostream>
using namespace std;
#include <string>
#include <list>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T = 10;

	for (int i = 1; i <= 10; i++) {
		int N; // 암호문 개수 범위 : 2000 ~ 4000
		cin >> N;
		
		list<int> L;

		for (int j = 0; j < N; j++) {
			int p;
			cin >> p;
			L.push_back(p);
		}

		int P_count; // 명령어 개수
		cin >> P_count;

		while (P_count--) {
			char com; // 명령어
			cin >> com; 
			
			if (com == 'I') {
				int x, y;
				cin >> x >> y;

				auto it = L.begin();
				advance(it, x);
				// it의 위치를 시작점으로부터 x만큼 앞으로 옮긴다
				// list는 iterator로 이동해야하기 때문

				for(int k = 0; k < y; k++){
					int num;
					cin >> num;
					L.insert(it, num);
					// V.insert(위치, 넣을 값)
				}
			}
			else if (com == 'D') {
				int x, y;
				cin >> x >> y;

				auto it = L.begin();
				advance(it, x);
				
				for (int k = 0; k < y; k++) {
					it = L.erase(it);
				}
			}
			else if (com == 'A') {
				int y;
				cin >> y;

				for (int k = 0; k < y; k++) {
					int num;
					cin >> num;
					L.push_back(num);
				}
			}
		}

		cout << "#" << i << ' ';
		auto it = L.begin();
		for (int j = 0; j < 10; j++) {
			cout << *it << ' ';
			it++;
		}
		cout << "\n";
	}
	return 0;
}