// 24시간이 모자라

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int A, B;
		cin >> A >> B;

		int hour = 0; // 0 ~ 23까지만

		hour += A;
		
		while (B > 0) {
			hour += 1;
			B -= 1;

			if (hour >= 24){
				hour = 0;
				break;
			}
		}
		hour += B;
		cout << "#" << i << ' ' << hour << "\n";
	}
	return 0;
}