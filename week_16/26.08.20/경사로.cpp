#include <bits/stdc++.h>
using namespace std;

int a[105][105];
int b[105][105];
int ans, N, L;

void func(int arr[105][105]){
  for(int i = 0 ; i < N ; i++){
    int cnt = 1;
    int j;
    for(j = 0 ; j < N - 1 ; j++){
        // 다음 칸과 높이가 같으면 카운트는 매번 증가
        if(arr[i][j] == arr[i][j+1]) cnt++;
        // 높이가 다르면
        // 무조건 높이는 1차이 나야 하고,
        // 나보다 작으면서 경사로를 만들고 있지 않았어? 그러면 카운트를 줄여서 1을 향해 가도록 
        else if(arr[i][j + 1] == arr[i][j] - 1 && cnt >= 0) cnt = -L + 1;
        // 나보다 크고 이미 경사로 깔 곳이 많으면, 카운트를 1로 
        else if(arr[i][j + 1] == arr[i][j] + 1 && cnt >= L) cnt = 1;
        else break;
    }
    if(j == N - 1 && cnt >= 0) ans++;
  }

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> L;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }    
    func(a); func(b);

    cout << ans;
    return 0;
}
