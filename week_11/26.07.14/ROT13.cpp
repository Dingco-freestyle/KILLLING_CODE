#include <bits/stdc++.h>
using namespace std;

string S;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    getline(cin, S);
    for(int i = 0 ; i < S.size() ; i++){
        if(S[i] >= 'a' && S[i] <= 'z'){
            if(S[i] + 13 > 'z') S[i] = S[i] + 13 - 26;
            else S[i] += 13;
        }
        else if(S[i] >= 'A' && S[i] <= 'Z'){
            if(S[i] + 13 > 'Z') S[i] = S[i] + 13 - 26;
            else S[i] += 13;
        }
    }

    cout << S;

    return 0;
}
