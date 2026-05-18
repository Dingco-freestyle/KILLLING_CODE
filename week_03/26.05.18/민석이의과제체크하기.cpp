// SWEA D3 5431번 - 민석이의 과제 체크하기

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
		vector<int> v1;
		vector<int> v2;
		int N; // 1~N까지 수강생 수
		int K; // 과제 제출한 사람 수
		cin >> N >> K;
		for (int j = 0; j < K; j++) {
			int number;
			cin >> number;
			v1.push_back(number);
		}

		for (int j = 1; j <= N; j++) {
			if (find(v1.begin(), v1.end(), j) != v1.end())
				continue;

			else 
				v2.push_back(j);
		}

		sort(v2.begin(), v2.end());
		cout << "#" << i << ' ';

		for (int a : v2) 
			cout << a << ' ';
		
		cout << "\n";
	}
	return 0;
}