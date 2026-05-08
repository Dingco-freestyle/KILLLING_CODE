// 수도 요금 경쟁

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; // 테스트 케이수 수
    cin >> T;

    for(int i = 1; i <= T; i++){
        int P; // A사의 수요 요금 / 1L 당
        int Q; // B사의 R리터 이하 기본 수도 요금
        int R; // B사의 기본 요금 사용량 제한
        int S; // B사의 R리터 초과 사용시 1L 당 추가 요금
        int W; // 한 달간 사용하는 수도의 양

        cin >> P >> Q >> R >> S >> W;

        if((P * W) > ((W <= R) ? Q : Q + (W - R) * S)){
            cout << "#" << i << " "; 
            cout << ((W <= R) ? Q : Q + (W - R) * S) << "\n";
        }
        else{
            cout << "#" << i << " "; 
            cout << P * W << "\n";
        }
    }
    return 0;
}