// 쉬운 거스름돈

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int N;
        cin >> N;

        int cnt50000 = 0, cnt10000 = 0, cnt5000 = 0,cnt1000 = 0, cnt500 = 0, cnt100 = 0, cnt50 = 0, cnt10 = 0;

        cnt50000 = N / 50000;
        N = N % 50000;
        
        cnt10000 = N / 10000;
        N = N % 10000;

        cnt5000 = N / 5000;
        N = N % 5000;
        
        cnt1000 = N / 1000;
        N = N % 1000;

        cnt500 = N / 500;
        N = N % 500;

        cnt100 = N / 100;
        N = N % 100;

        cnt50 = N / 50;
        N = N % 50;

        cnt10 = N / 10;
        N = N % 10;

        cout << "#" << i << "\n";
        cout << cnt50000 << ' ' << cnt10000 << ' ' << cnt5000 << ' '
            << cnt1000 << ' ' << cnt500 << ' ' << cnt100 << ' '
            << cnt50 << ' ' << cnt10 << "\n";
    }
    return 0;
}