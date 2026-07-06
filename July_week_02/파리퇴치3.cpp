// [배열 제어] 파리퇴치 3

#include <iostream>
using namespace std;
#include <vector>

int dx10[4] = {-1, 1, 0, 0};
int dy10[4] = {0, 0, -1, 1};
int dxX[4] = {-1, -1, 1, 1};
int dyX[4] = {-1, 1, -1, 1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int t = 1; t <= T; t++){
        int N, M;
        cin >> N >> M;

        int answer = 0;

        vector<vector<int>> arr(N, vector<int>(N, 0));
        // (N, 0) --> 길이가 N이고 모든 값이 0인 2차원 벡터

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> arr[i][j];
            }
        }

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){

                int sum10 = arr[i][j];
                int sumX= arr[i][j];

                 // 십자(+) 최댓값 계산
                for(int d = 0; d < 4; d++){
                    for(int k = 1; k < M; k++){
                        int nx = i + dx10[d] * k;
                        int ny = j + dy10[d] * k;

                        if(nx < 0 || ny < 0 || nx >= N || ny >= N)
                            continue;
                        
                        sum10 += arr[nx][ny];
                    }
                }

                // 엑스(X) 최댓값 계산
                for(int d = 0; d < 4; d++){
                    for(int k = 1; k < M; k++){
                        int nx = i + dxX[d] * k;
                        int ny = j + dyX[d] * k;

                        if(nx < 0 || ny < 0 || nx >= N || ny >= N)
                            continue;
                        
                        sumX += arr[nx][ny];
                    }
                }
                answer = answer > sum10 ? answer : sum10;
                answer = answer > sumX ? answer : sumX;
            }
        }
    cout << "#" << t << ' ' << answer << "\n";
    }
    return 0;
}