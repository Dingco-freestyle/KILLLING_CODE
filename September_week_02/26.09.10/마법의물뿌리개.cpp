#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int T;
int N; // 나무의 개수

int max_height = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;

	for (int tc = 1; tc <= T; tc++) {

		cin >> N;

		vector<int> v;
		
		for (int i = 0; i < N; i++) {
			int height_val;
			cin >> height_val;
			v.push_back(height_val);
		}

		sort(v.begin(), v.end());
		 
		// 제일 높은 나무 높이를 구함
		max_height = v[N - 1];

		int one_day = 0;
		int two_days = 0;

		for (int i = 0; i < N; i++) {
			int diff = max_height - v[i];

			one_day += diff % 2;
			two_days += diff / 2;
		}

		/* 총 일수 구하기 */

		// two_days가 더 많을 때
		while (two_days > one_day + 1){
			two_days--;
			one_day += 2;
		}

		int day_cnt = 0;

		// one_day가 더 많을 때
		if (one_day > two_days)
			day_cnt = 2 * one_day - 1;
		
		// one_day == two_days 일 때
		else
			day_cnt = 2 * two_days;
			// 1번 2번 1번 2번 -> 즉 일수는 2 * 2
			
		cout << "#" << tc << " " << day_cnt << "\n";
	}

	return 0;
}