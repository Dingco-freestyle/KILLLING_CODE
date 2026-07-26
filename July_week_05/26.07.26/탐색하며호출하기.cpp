#include <iostream>
using namespace std;
#include <vector>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<char> v;
	char c;

	for (int i = 0; i < 5; i++) {
		cin >> c;
		v.push_back(c);
	}
	
	for (int i = 0; i < 5; i++) {
		if (v[i] >= 'a' && v[i] <= 'z') {
			cout << "소";
		}
		else if (v[i] >= 'A' && v[i] <= 'Z') {
			cout << "대";
		}
	}

	return 0;
}