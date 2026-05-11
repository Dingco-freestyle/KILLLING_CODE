// 간단한 369 게임

#include <iostream>
using namespace std;
#include <string>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    // (핵심)
    for(int i = 1; i <= N; i++){
        // 해당 숫자가 2개 들어가면 --
        // 해당 숫자가 3개 들어가면 ---
        string s = to_string(i);

        // 3.6.9 게임 기본 알고리즘 코드
        int cnt = 0;
        for(auto c : s){
            if(c == '3' || c == '6' || c == '9')
                cnt += 1;
        }
                
        if(cnt > 0)
            cout << string(cnt, '-') << ' ';
            // string cnt 개수만큼 - 출력
        else
            cout << i << ' ';  
    }
    return 0;
}
