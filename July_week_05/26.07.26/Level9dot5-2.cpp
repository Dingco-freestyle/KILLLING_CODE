#include <iostream>
using namespace std;
#include <vector>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	char c;
	vector<char> V;
	vector<int> Idx;

	for (int i = 0; i < 5; i++) {
		cin >> c;
		V.push_back(c);
	}

	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (V[i] == 'A') {
			cnt += 1;
			Idx.push_back(i);
		}
	}

	cout << "문자A는 " << cnt << "개발견" << "\n";
	for (int i = 0; i < Idx.size(); i++) {
		cout << Idx[i] << "번" << "\n";
	}
	return 0;
}