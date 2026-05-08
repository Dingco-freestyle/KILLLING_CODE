// 지그재그 숫자
// 1부터 N까지의 숫자에서 
// 홀수는 더하고 짝수는 뺐을 때 
// 최종 누적된 값을 구해보자.
#include <iostream>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int T; // 입력 받을 테스트 케이스의 수 
    cin >> T;
     
    int sum;
 
    int N;
 
    for(int i = 1; i <= T; i++){
        cin >> N;
        sum = 0; // sum의 초기화 위치를 헷갈렸네연
        for(int j = 1; j <= N; j++){
            if(j %2 != 0)
                sum += j;
            else
                sum += -j;
            }
        cout << "#" << i << " ";
        cout << sum << "\n";
    }
    return 0;
}
