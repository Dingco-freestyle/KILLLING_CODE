#include <bits/stdc++.h>
using namespace std;

int M, N, K, cnt;
int _map[105][105];
int vis[105][105];
int dy[4] = {0, 0, 1, -1};
int dx[4] = {1, -1, 0, 0};
vector<int> V;

void bfs(int y, int x){
    queue<pair<int, int>> Q;
    Q.push({y, x}); vis[y][x] = 1;
    int c = 1;
    while(!Q.empty()){
        tie(y, x) = Q.front(); Q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || ny >= M || nx < 0 || nx >= N) continue;
            if(_map[ny][nx] == -1 || vis[ny][nx]) continue;

            vis[ny][nx] = vis[y][x] + 1;
            c++;
            Q.push({ny, nx});
        }
    }

    V.push_back(c);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> M >> N >> K;

    for(int i = 0 ; i < K ; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = y1 ; j < y2 ; j++){
            for(int k = x1 ; k < x2 ; k++){
                _map[j][k] = -1;
            }
        }
    }

    for(int i = 0 ; i < M ; i++){
        for(int j = 0 ; j < N ; j++){
            if(!_map[i][j] && !vis[i][j]) {
                bfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    sort(V.begin(), V.end());
    for(auto i : V) cout << i << ' ';
    return 0;
}
