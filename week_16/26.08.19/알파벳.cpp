#include <bits/stdc++.h>
using namespace std;

int R, C, ans;
char _map[25][25];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y, int n, int cnt){
    for(int i = 0 ; i < 4 ; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(ny < 0 || ny >= R || nx < 0 || nx >= C) continue;
        if(n & (1 << (_map[ny][nx] - 'A'))) continue;
        
        // 재귀할 때는 영향 안가게 함수에 바로 넣기
        dfs(nx, ny, n | (1 << (_map[ny][nx] - 'A')), cnt + 1);
    }
    
    ans = max(ans, cnt);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 그냥 방문한 부분을 비트마스킹으로 체킹하는 거임
    string str;
    cin >> R >> C;
    for(int i = 0 ; i < R ; i++){
        cin >> str;
        for(int j = 0 ; j < C ; j++){
            _map[i][j] = str[j];
        }
    }
    int n;
    n = 1 << (_map[0][0] - 'A');
    dfs(0, 0, n, 1);

    cout << ans;

    return 0;
}
