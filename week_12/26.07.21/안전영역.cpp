#include <bits/stdc++.h>
using namespace std;

int N, H, M;
int _map[105][105];
int vis[105][105];
int dy[4] = {0, 0, 1, -1};
int dx[4] = {1, -1, 0, 0};

void bfs(int y, int x, int R){
    queue<pair<int, int>> Q;
    Q.push({y, x}); vis[y][x] = 1;
    while(!Q.empty()){
        tie(y, x) = Q.front(); Q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny < 0 || ny >= N || nx < 0 || nx >= N) continue;
            if(vis[ny][nx] || _map[ny][nx] <= R) continue;
            
            vis[ny][nx] = 1;
            Q.push({ny, nx});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cin >> _map[i][j];
            H = max(H, _map[i][j]);
        }
    }

    for(int R = 1 ; R <= H ; R++){
        memset(vis, 0, sizeof(vis));
        int cnt = 0;
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < N ; j++){
                if(!vis[i][j] && _map[i][j] > R) {
                   // cout << R << " : " << i << ", " << j << '\n';
                    bfs(i, j, R);
                    cnt++;
                }
            }
        }

        M = max(M, cnt);
    }
    if(M == 0) M = 1; 
    cout << M;
    return 0;
}
