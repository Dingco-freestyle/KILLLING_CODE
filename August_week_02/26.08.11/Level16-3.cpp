#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	int a;

	cin >> str;
	cin >> a;

	// insert()는 문자 하나를 특정 위치에 삽입할 때 사용하는 형태가 아니라
	// 문자열!! 형태로 넣어야 함 --> " "
	
	str.insert(a, "A");

	cout << str;


	return 0;
}