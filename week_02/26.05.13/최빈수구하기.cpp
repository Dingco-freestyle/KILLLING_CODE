// 최빈수 구하기

#include <iostream>
using namespace std;
#include <algorithm>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int test_number;
		cin >> test_number;

		int arr[101] = { 0 }; // 0~100 점수의 빈도수를 세기 위한 카운트 

		for (int i = 0; i < 1000; i++) {
			int score;
			cin >> score;

			// (핵심) 
			arr[score] += 1;
		}
		// 가장 값이 큰 인덱스를 출력한다
		// 가장 값이 큰 인덱스를 찾기 위해서는?
		// 값이 같은 인덱스일 경우 더 큰 인덱스 값을 출력한다

		// <-- 생각해내재 못함...ㅠ
		int max_cnt = 0;
		int answer = 0;
		for (int i = 0; i < 101; i++) {
			if (arr[i] >= max_cnt){
				max_cnt = arr[i];
				answer = i;
			}
		}
		cout << "#" << i << ' ' << answer << "\n";
	}
	return 0;
}
