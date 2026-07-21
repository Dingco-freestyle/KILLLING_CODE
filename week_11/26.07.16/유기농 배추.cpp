#include <bits/stdc++.h>
using namespace std;

int T, N, M, K, X, Y, cnt;
int m[55][55];
bool vis[55][55];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int bfs(){  
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            if(m[i][j] && !vis[i][j]){
                queue<pair<int, int>> Q; Q.push({i, j});
                vis[i][j] = 1;
                while(!Q.empty()){
                    pair<int, int> cur = Q.front(); Q.pop();
                    for(int i = 0 ; i < 4 ; i++){
                        int ny = cur.first + dy[i];
                        int nx = cur.second + dx[i];
                        
                        if(ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
                        if(m[ny][nx] == 0 || vis[ny][nx] == 1) continue;
                        
                        vis[ny][nx] = 1;
                        Q.push({ny, nx});
                    }
                }
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> T;
    while(T--){
        cin >> M >> N >> K;
        cnt = 0;
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < M ; j++){
                m[i][j] = 0;
                vis[i][j] = false;
            }
        }
        while(K--){
            cin >> X >> Y;
            m[Y][X] = 1;
        }

        cout << bfs() << '\n';
    }
    return 0;
}
