// SWEA D3 1213번 - String

#include <iostream>
using namespace std;
#include <string>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T = 10;
	
	for (int t = 1; t <= T; t++) {
		int TC;
		cin >> TC;
		string findStr;
		cin >> findStr;
		string str;
		cin >> str;

		int cnt = 0;

		// 문자열 탐색은 '완전탐색'으로 풀 것
		for(int i = 0; i <= str.size() - findStr.size(); i++){
			bool flag = true;

			for (int j = 0; j < findStr.size(); j++) {
				if (str[i + j] != findStr[j]) {
					flag = false;
					break;
				}
			}
			if (flag)
				cnt += 1;
		}
		cout << "#" << t << ' ' << cnt << "\n";
	}
	return 0;
}


/* 
틀린 내 풀이
for (int i = 0; i < str.size(); i++) {
	for (int j = 0; j < findStr.size(); j++) {
		if (str[i] == findStr[j]) {
			if (str[i + 1] == findStr[j+1]) {
				cnt += 1;
			}
		}
		else {
			continue;
		}
	}
*/