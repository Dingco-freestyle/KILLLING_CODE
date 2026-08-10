#include <iostream>
using namespace std;
#include <vector>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char arr[6] = { 'A', 'P', 'P', 'L', 'E', 'T' };
	vector<char> v;

	char c;
	int cnt = 0;

	for (int i = 0; i < 5; i++) {
		cin >> c;
		v.push_back(c);
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			if (v[j] == arr[i]){
				cnt += 1;
				break;
			}
		}
	}


	
	/*
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			if (v[i] == arr[j]){
				cnt += 1;
				break;
			}
		}
	}
	*/

	// for문을 위에처럼 주석의 코드처럼 돌리면 카운트가 하나 덜 나오게 된다.
	// 원리는 같은데 왜 그랬는지 고민해봤던 코드

	
	cout << cnt << "개 맞추었습니다";

	return 0;
}
