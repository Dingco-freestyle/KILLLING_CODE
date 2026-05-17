#include <vector>
#include <queue>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int vis[105][105];

int solution(vector<vector<int>> maps)
{
    int answer = 0;
    int n = maps.size();
    int m = maps[0].size();
    
    queue <pair<int, int>> Q; pair<int, int> cur;
    Q.push({0, 0}); vis[0][0] = 1;
    
    while(!Q.empty()){
        cur = Q.front(); Q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int ny = cur.first + dy[i];
            int nx = cur.second + dx[i];
            
            if(ny == n - 1 && nx == m - 1){
                return vis[cur.first][cur.second] + 1;
            }
            
            if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
            if(vis[ny][nx] > 0 || maps[ny][nx] != 1) continue;
            
            vis[ny][nx] = vis[cur.first][cur.second] + 1;
            
            Q.push({ny, nx});
        }
    }
    
    return -1;
}