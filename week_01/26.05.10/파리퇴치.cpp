// 파리 퇴치
// 어렵다...
#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int N, M;
        cin >> N >> M;
        int max = 0;

        vector<vector<int>> arr(N, vector<int>(N, 0));
        // 2차원  벡터 선언

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> arr[i][j];
            }
        }

        // (핵심) 내가 구현하지 못한 부분
        for(int i = 0; i <= N - M; i++){
            for(int j = 0; j <= N - M; j++){
                int sum = 0;
                for(int k = i; k < i + M; k++){
                    for(int l = j; l < j+ M; l++){
                        sum += arr[k][l];
                    }
                }
                if(sum > max)
                    max = sum;
            }
        }
        cout << "#" << i << " " << max << "\n";
    }
    return 0;
}
