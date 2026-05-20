// SWEA D3 1234번 - 비밀번호
// stack 자료구조 응용

#include <iostream>
using namespace std;
#include <string>
#include <stack>
#include <algorithm>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T = 10;

	for (int i = 1; i <= T; i++) {

		int N; // 문자열 길이
		string str;
		cin >> N >> str;

		stack<char> S;

		// 핵심
		for(auto c : str){
			if (!S.empty() && S.top() == c)
				S.pop();
			else 
				S.push(c);
		}

		string ans = "";
		// 스택은 for문으로 접근 불가능
		// 기본적으로 pop() 하면서 출력
		while (!S.empty()) {
			ans += S.top();
			S.pop();
		}
		reverse(ans.begin(), ans.end());
		cout << "#" << i << ' ' << ans << "\n";
	}
	return 0;
}