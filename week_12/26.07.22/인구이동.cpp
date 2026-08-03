#include <bits/stdc++.h>
using namespace std;

int N, L, R, sum, cnt;
int arr[55][55];
int vis[55][55];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
vector<pair<int, int>> V;

void dfs(int y, int x){
    sum += arr[y][x]; vis[y][x] = 1;
    V.push_back({y, x});
    for(int i = 0 ; i < 4 ; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(ny < 0 || ny >= N || nx < 0 || nx >= N) continue;
        if(vis[ny][nx]) continue;
        
        if(abs(arr[ny][nx] - arr[y][x]) < L || abs(arr[ny][nx] - arr[y][x]) > R) continue;

        vis[ny][nx] = 1;
        dfs(ny, nx);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력 받고
    cin >> N >> L >> R;
    
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cin >> arr[i][j];
        }
    }

    // 계속해서 영역 계산 진행
    while(1){
        fill(&vis[0][0], &vis[0][0] + 55 * 55, 0);
        bool flag = false;
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < N ; j++){
                if(!vis[i][j]){
                    sum = 0;
                    V.clear();
                    dfs(i, j);
                    
                    if(V.size() > 1){
                        flag = true;
                        int P = sum / V.size();
                        for(auto i : V) arr[i.first][i.second] = P;
                    }
                }
            }
        }
        if(!flag) break;
        cnt++;
    }
    // 더이상 갈 곳 없으면 stop
    cout << cnt;

    return 0;
}
