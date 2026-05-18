// SWEA D3 13229번 - 일요일

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	string arr[7] = 
	{"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	
	for (int i = 1; i <= T; i++) {
		int p1 = 0;
		int ans = 0;

		string s;
		cin >> s;

		for (int j = 1; j <= sizeof(arr) / sizeof(arr[0]); j++) {
			// arr의 길이 : sizeof(arr) / sizeof(arr[0])
			// vector의 길이 : v.size()
			// string의 길이 : str.length()
			
			if (s == arr[j - 1]) {
				p1 = j;
			}

			if (p1 == sizeof(arr) / sizeof(arr[0])) {
				ans = sizeof(arr) / sizeof(arr[0]);
			}
			else {
				ans = sizeof(arr) / sizeof(arr[0]) - p1;
			}

		}
		cout << "#" << i << ' ' << ans << "\n";
	}
	return 0;
}