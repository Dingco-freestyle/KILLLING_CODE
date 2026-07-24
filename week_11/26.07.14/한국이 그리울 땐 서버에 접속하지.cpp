#include <bits/stdc++.h>
using namespace std;

int N;
string S, str, str1, str2, S1, S2;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> S;

    for(int i = 0 ; i < S.size() ; i++){
        if(S[i] == '*'){
          S1 = S.substr(0, i);
          S2 = S.substr(i + 1);
          break;
        }
    }
    for(int i = 0 ; i < N ; i++){
        cin >> str;
        str1 = str.substr(0, S1.size());
        str2 = str.substr(str.size() - S2.size());
        if(S1 == str1 && S2 == str2) cout << "DA" << '\n';
        else cout << "NE" << '\n';
    }
    

    return 0;
}
