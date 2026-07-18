// SWEA D3 14178 1차원 정원

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int N, D;
        cin >> N >> D;

       int range = D * 2 + 1;
       int count = (N + range - 1) / range;
       
        cout << "#" << i << ' ' << count << "\n";
    }
    return 0;
}   