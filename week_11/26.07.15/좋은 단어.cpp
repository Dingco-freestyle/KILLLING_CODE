#include <bits/stdc++.h>
using namespace std;

int N, ans;
string str;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    while(N--){
        cin >> str;
        stack<char> stk;
        
        for(auto c : str){
            if(!stk.empty() && stk.top() == c) stk.pop();
            else stk.push(c);
        }

        if(stk.empty()) ans++;
    }

    cout << ans;

    return 0;
}
