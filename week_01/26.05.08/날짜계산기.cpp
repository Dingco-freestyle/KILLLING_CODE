#include <iostream>
using namespace std;

// 핵심 아이디어
// 1. 월별 일수 --> 배열로 미리 지정
// 3. 총 일수 변환 (d2 - d1 + 1)


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        // 1번 아이디어(중요)
        int mon[12] = {31, 28, 31, 30, 
                        31, 30, 31, 31, 
                        30, 31, 30, 31};
        
        int m1, d1, m2, d2;
        cin >> m1 >> d1 >> m2 >> d2;

        if(m1 > m2) break;

        int day1 = 0;
        int day2 = 0;

        /*
        핵심 코드
        */
        for(int i = 1; i < m1; i++)
            day1 += mon[i-1]; // 누적
        day1 += d1;

        for(int i = 1; i < m2; i++)
            day2 += mon[i-1]; // 누적
        day2 += d2;

        cout << "#" << i << " " << (day2 - day1 + 1) << "\n"; 
    }
    return 0;
}