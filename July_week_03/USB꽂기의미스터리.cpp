// SWEA 9700 USB 꽂기의 미스터리

#include <iostream>
using namespace std;

int main(){

    // p = 올바른 면으로 USB를 꽂음
    // q = 1-p = 뒤집어서 USB를 꽂음

    // q = 올바른 면으로 정상적으로 USB가 꽂힘
    // 1-q = USB가 꽂히지 않을 확률

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        double p, q;
        cin >> p >> q;

        if(q == 0){
            cout << "NO" << "\n";
            continue;
        }

        cout << "#" << i << ' ';
        if((1-p) < p * (1-q)){
            cout << "YES" << "\n";
        } 
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}