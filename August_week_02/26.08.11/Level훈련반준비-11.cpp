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

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			if (v[i] == arr[j]){
				cnt += 1;
				break;
			}
		}
	}

	cout << cnt << "개 맞추었습니다";

	return 0;
}