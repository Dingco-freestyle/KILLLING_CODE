// SWEA D3 1217번 - 거듭제곱
// 제약사항1 : #include를 제외한 나머지 라이브러리 사용 금지
// 제약사항2 : 재귀호출을 사용해 구현할 것

#include <iostream>
using namespace std;



int func1(int a, int b) {
	// a는 곱하는 수, b는 횟수
	if (b == 0)
		return 1;

	return a * func1(a, b - 1);
	// 아 이걸 생각 못해내냐...하
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T = 10;

	for (int i = 1; i <= T; i++) {
		int T;
		cin >> T;
		int answer = 0;
		int a, b;
		cin >> a >> b;

		answer = func1(a, b);

		cout << "#" << i << ' ' << answer << "\n";
	}
	return 0;
}