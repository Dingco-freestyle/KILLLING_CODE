#include <iostream>
using namespace std;
#include <set>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int N; // N값
        cin >> N;
        set<int> S;
        int k = 0;
        int num = 0; // k*N 값을 담을 변수

        while(S.size() < 10){
            k++;
            num = k * N;
            
            int tmp = num;

            while(tmp > 0){
                S.insert(tmp % 10);
                tmp /= 10;
            }
        }
        cout << "#" << i << " " << num << "\n";
    }
    return 0;
}
