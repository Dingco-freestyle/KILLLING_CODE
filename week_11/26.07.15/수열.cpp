#include <bits/stdc++.h>
using namespace std;

int N, K, ans, sum;
int arr[100005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i < K ; i++) ans += arr[i];
    sum = ans;
    for(int i = K ; i < N ; i++){
        sum += arr[i];
        sum -= arr[i - K];

        if(ans < sum) ans = sum;
    }

    cout << ans;
    return 0;
}
