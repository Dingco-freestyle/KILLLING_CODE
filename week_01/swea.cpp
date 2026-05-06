// 간단한 소인수분해
// N=2a x 3b x 5c x 7d x 11e

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; // 입력 받을 테스트 케이스의 수 
    cin >> T; 

    // 여기서부터 내가 생각하지 못한 코드
    int N;
    for(int i = 1; i <= T; i++){
        cin >> N;
    
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        // 소인수 분해
         while(N % 2 ==0){
            N = N / 2;
            a++;
        }
        while(N % 3 ==0){
            N = N / 3;
            b++;
        }
        while(N % 5 ==0){
            N = N / 5;
            c++;
        }
        while(N % 7 ==0){
            N = N / 7;
            d++;
        }
        while(N % 11 ==0){
            N = N / 11;
            e++;
        }
        //
        cout << "#" << i << " ";
        cout << a << " " << b << " " << c << " " << d << " " << e << "\n";
    }
    return 0;
}

