// 달팽이 숫자
 
#include <iostream>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int T;
    cin >> T;
 
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    // (중요)범위 이내 + arr 값이 0인 경우에 값을 채워나간다
    // 이 조건이 성립하지 않으면 방향 전환!
 
    for(int i = 1; i <= T; i++){
        int N;
        cin >> N;
        int arr[100][100] = {0}; // 배열 초기화 miss
        int x = 0, y = 0, dir = 0;
 
        for(int k = 1; k <= N * N; k++){
            arr[x][y] = k;
 
            // (핵심 코드)여기서부터 생각하지 못함
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            // 현재 방향(dir)으로 한 칸 이동한 다음 위치 계산
 
            if(nx < 0 || nx >= N || ny < 0 || ny >= N || arr[nx][ny] != 0){
                // 범위 밖이고 배열에 이미 다른 값이 들어있다면
                dir = (dir + 1) % 4;
                // 방향 전환
 
                nx = x + dx[dir];
                ny = y + dy[dir];
                // 바뀐 방향으로 다음 위치를 다시 계산
            }
            x = nx;
            y = ny;
            // 계산한 다음 위치로 이동
        }
         
        cout << "#" << i << "\n";
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << arr[i][j] << " ";
            }
        cout << "\n";
        }
    }
    return 0;
}