// SWEA D3 12368번 - 24시간

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

		// 효율적인 풀이
		hour = (A + B) % 24;

		cout << "#" << i << ' ' << hour << "\n";
	}
	return 0;
}

/*
		내 풀이
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
		*/
