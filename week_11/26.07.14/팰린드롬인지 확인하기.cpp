#include <bits/stdc++.h>
using namespace std;

string S;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> S;

    for(int i = 0 ; i < S.length() / 2 ; i++){
        if(S[i] != S[S.length() - 1 - i]) {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}
