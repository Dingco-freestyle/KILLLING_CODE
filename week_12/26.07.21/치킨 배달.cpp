#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[20];
int _map[55][55];
int dx[4] = {1, -1 ,0 ,0};
int dy[4] = {0, 0, 1, -1};
int MIN = 99999;
vector<pair<int, int>> h, ch;

int func(){
    // map 만들고
    int _map2[55][55] = {0};
    for(int i = 0 ; i < ch.size() ; i++){
        if(!arr[i]){
            int y = ch[i].first;
            int x = ch[i].second;

            _map2[y][x] = 2;
        }
    }

    int sum = 0;
    // 이제 그 맵가지고 bfs
    for(int i = 0 ; i < h.size() ; i++){
        queue<pair<int, int>> Q; Q.push(h[i]);
        int vis[55][55] = {0};
        vis[h[i].first][h[i].second] = 1;
        while(!Q.empty()){
            pair<int, int> cur = Q.front(); Q.pop();

            if(_map2[cur.first][cur.second] == 2){
                sum += vis[cur.first][cur.second] - 1;
                break;
            }
            for(int i = 0 ; i < 4 ; i++){
                int ny = cur.first + dy[i];
                int nx = cur.second + dx[i];
                
                if(ny < 0 || ny >= N || nx < 0 || nx >= N) continue;
                if(vis[ny][nx]) continue;
        
                vis[ny][nx] = vis[cur.first][cur.second] + 1;
                
                Q.push({ny, nx});
            }
        }
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cin >> _map[i][j];
            if(_map[i][j] == 1) h.push_back({i, j});
            else if(_map[i][j] == 2) ch.push_back({i, j});
        }
    }
    // 치킨 집의 위치를 조합으로 해서 돌리는데
    for(int i = M; i < ch.size() ; i++) arr[i] = 1;
    do{
        int temp = func();
        if(temp < MIN) MIN = temp;
    }while(next_permutation(arr, arr + ch.size()));
    // 그때 집마다 점수를 다 계산해서 하면 되나
    cout << MIN;

    return 0;
}
