#include <bits/stdc++.h>
using namespace std;

int A, B, C, i, o, M;
int arr[101];
int ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> A >> B >> C;
    B *= 2;
    C *= 3;
    for(int j = 0 ; j < 3 ; j++){
        cin >> i >> o;
        if( M < o ) M = o;
        for(int k = i ; k < o ; k++) arr[k]++;
    }

    for(int i = 0 ; i < M ; i++){
        if(arr[i] == 1) ans += A;
        else if(arr[i] == 2) ans += B;
        else if(arr[i] == 3) ans += C;
    }

    cout << ans;
    return 0;
}
