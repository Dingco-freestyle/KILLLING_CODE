#include <bits/stdc++.h>
using namespace std;

int N;
int arr[26];
string S;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> S;
        arr[S[0] - 'a']++;
    }

    bool flag = true;
    for(int i = 0 ; i < 26 ; i++) {
        if(arr[i] >= 5){
        cout << char(i + 'a');
        flag = false;
        }
    }
    if(flag) cout << "PREDAJA";

    return 0;
}
