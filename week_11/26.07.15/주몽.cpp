#include <bits/stdc++.h>
using namespace std;

int N, M, num, ans;
map <int, int> m;
int arr[15005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for(int i = 0 ; i < N ; i++){
        cin >> num;
        m[num]++; arr[i] = num;
    }

    for(int i = 0 ; i < N ; i++){
        if(m[M - arr[i]]) ans++;
    }

    cout << ans / 2;
    return 0;
}
