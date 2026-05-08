// 숫자를 정렬하자

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    

    for(int i = 1; i <= T; i++){
        int cnt;
        cin >> cnt;
    
        vector<int> V;
        
        for(int j = 0; j < cnt; j++){
            int p;
            cin >> p;
            V.push_back(p);
        }
        sort(V.begin(), V.end());

        cout << "#" << i << " ";
        
        for(auto n : V)
            cout << n << " ";
            cout << "\n";
    }
    return 0;
}