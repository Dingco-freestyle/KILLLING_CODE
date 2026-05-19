// SWEA D3 3456번 - 직사각형 길이 찾기

#include <iostream>
using namespace std;
#include <vector>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		vector<int> v;
		int arr[101] = { 0 };
		int ans = 0;
		int d;

		for (int j = 0; j < 3; j++) {
			cin >> d;
			arr[d] += 1;
		}

		for (int j = 0; j < 101; j++) {
			if (arr[j] % 2 != 0){
				ans = j;
				break;
			}
		}
		cout << "#" << i << ' ' << ans << "\n";
	}
	return 0;
}