#include <bits/stdc++.h>
using namespace std;

int N, M;
char _map[55][55];
int dy[4] = {0, 0, 1, -1};
int dx[4] = {1, -1, 0, 0};
int MAX = -1;

void func(int y, int x){
    queue<pair<int, int>> Q;
    int vis[55][55] = {0};
    
    Q.push({y, x}); vis[y][x] = 1;

    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int ny = cur.first + dy[i];
            int nx = cur.second + dx[i];
            
            if(ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
            if(_map[ny][nx] == 'W' || vis[ny][nx]) continue;
            vis[ny][nx] = vis[cur.first][cur.second] + 1;
            MAX = max(MAX, vis[ny][nx] - 1);
            Q.push({ny, nx});
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            cin >> _map[i][j];
        }
    }

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            if(_map[i][j] == 'L'){
                func(i, j);
            }
        }
    }

    cout << MAX;

    return 0;
}
