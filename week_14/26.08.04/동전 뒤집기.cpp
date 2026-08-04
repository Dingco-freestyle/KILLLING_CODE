#include <bits/stdc++.h>
using namespace std;

int N, ans = 99999;
int arr[25];
void func(int t){
    if(t > N){
        int sum = 0;
        // 세로로 돌아가는 로직 짜야함
        for(int i = 0 ; i < N ; i++){
            int cnt = 0;
            for(int j = 1 ; j <= N ; j++){
                // 1 == T이면 카운트
                if(arr[j] & (1 << i)) cnt++;
            }
            // 더 작은 값을 더함
            sum += min(cnt, N - cnt);
        }

        ans = min(ans, sum);
        return;
    }

    // 전위 순회    
    func(t + 1);
    arr[t] = ~arr[t];
    func(t + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    // H = 0, T = 1로 해서 숫자로 행 받기
    string str;
    for(int i = 1 ; i <= N ; i++){
        cin >> str;
        int k = 1;
        for(int j = 0 ; j < N ; j++){
            if(str[j] == 'T') arr[i] += k;
            k *= 2;
        }
    }

    // 재귀함수 이용해서 순회
    func(1);

    cout << ans;

    return 0;
}
