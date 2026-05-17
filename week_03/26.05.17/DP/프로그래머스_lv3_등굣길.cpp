#include <string>
#include <vector>

using namespace std;

int map[105][105];
int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    for(int i = 1 ; i < m ; i++){
        map[0][i] = 1;
    }
    for(int i = 1 ; i < n ; i++){
        map[i][0] = 1;
    }
    
    for(int i = 0 ; i < puddles.size() ; i++){
        int x = puddles[i][0] - 1;
        int y = puddles[i][1] - 1;
        
        map[y][x] = -1;
        if(x == 0 && y <= n - 1){
            for(int j = y + 1 ; j < n ; j++){
                map[j][0] = 0;
            }
        }
        if(y == 0 && x <= m-1){
            for(int j = x + 1 ; j < m ; j++){
                map[0][j] = 0;
            }
        }
    }
    
    
    
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j < m ; j++){
            if(map[i][j] != -1) map[i][j] = (max(map[i-1][j], 0) % 1000000007 + max(map[i][j-1], 0) % 1000000007) % 1000000007;
        }
    }
    
    return map[n-1][m-1];
}