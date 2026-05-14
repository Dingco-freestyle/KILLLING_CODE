#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for(int i = 1; i <= T; i++) {
		vector<int> V;
		for (int j = 0; j < 10; j++) {
			int p;
			cin >> p;
			V.push_back(p);
		}
		sort(V.begin(), V.end());
		
		int sum = 0;
		double avg = 0;

		for (int k = 1; k < 9; k++)
			sum += V[k];

		// 나의 오류 코드 --> avg = round(sum / 8);
		// (중요) : round 함수 반환형은 double
		// 그래서 round 함수를 쓰기 위해 avg, sum의 형변환(캐스팅)이 필요함
		avg = round((double)sum / 8);

		cout << "#" << i << ' ' << avg << "\n";
	}
	return 0;
}