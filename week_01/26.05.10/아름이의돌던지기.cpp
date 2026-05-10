#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int N;
        cin >> N;
        int min = 100000;
        int cnt = 0;
        int d;
        for(int i = 0; i < N; i++){
            cin >> d;
            d = abs(d);
            if(d < min){
                min = d;
                // cnt += 1; <-- 나의 틀린 코드
                // 이렇게 하게 되면 제일 가깝게 던진 사람이 나올 때마다 
                // 카운트가 1 증가되는 것이므로 오답 
                cnt = 1; // 제일 가까운 사람 한 명만 추출해야하므로 이게 정답
            } 
            else if(min == d) // 동점자를 위한 조건
                cnt += 1;
        }
        cout << "#" << i << ' ' << min << ' ' << cnt << "\n";
    }
    return 0;
}