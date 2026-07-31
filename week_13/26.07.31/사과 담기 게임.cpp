#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M, J, l = 1, r, num, ans = 0;

    cin >> N >> M;
    cin >> J;
    
    for(int i = 0 ; i < J ; i++){
        r = l + M - 1;
        
        cin >> num;
        if(l <= num && r >= num) continue;
        // 내려올 칸이 더 왼쪽에 있을 때
        if(l > num){
            ans += (l - num);
            l = num;
        }
        else{
            ans += (num - r);
            l += (num - r);
        }
    }
    
    cout << ans;
    return 0;
}
