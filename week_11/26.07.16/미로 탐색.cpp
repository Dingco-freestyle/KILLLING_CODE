#include <bits/stdc++.h>
using namespace std;

int N, M;
string str;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int arr[105][105];
int vis[105][105];
queue<pair<int, int>> Q;

// 입력값이 다 붙어있으면 string으로 받아서 처리
// 범위 확인이 먼저, map & 방문 먼저 처리하면 오류 남

int bfs(){
    while(!Q.empty()){
        pair<int, int> cur = Q.front(); Q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int nx = cur.second + dx[i];
            int ny = cur.first + dy[i];

            if(nx == M - 1 && ny == N - 1) return vis[cur.first][cur.second] + 1;

            if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
            if(arr[ny][nx] == 0 || vis[ny][nx] > 0) continue; 
            
            vis[ny][nx] = vis[cur.first][cur.second] + 1;
            Q.push({ny, nx});
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for(int i = 0 ; i < N ; i++){
        cin >> str;
        for(int j = 0 ; j < M ; j++){
            arr[i][j] = str[j] - '0';
        }
    }
    
    Q.push({0, 0});
    vis[0][0] = 1;
    cout << bfs();
    
    return 0;
}
