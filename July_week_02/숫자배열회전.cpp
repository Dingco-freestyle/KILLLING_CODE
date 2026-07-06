// [문자열] 숫자 배열 회전

#include <iostream>
using namespace std;
#include <vector>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int t = 1; t <= T; t++){
        int N;
        cin >> N;

        vector<vector<int>> arr(N, vector<int>(N));
        vector<vector<int>> new90(N, vector<int>(N));
        vector<vector<int>> new180(N, vector<int>(N));
        vector<vector<int>> new270(N, vector<int>(N));

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> arr[i][j];
            }
        }

        // 90도 회전
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                new90[i][j] = arr[N-1-j][i];
            }
        }

        // 180도 회전
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                new180[i][j] = new90[N-1-j][i];
            }
        }

        // 270도 회전
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                new270[i][j] = new180[N-1-j][i];
            }
        }

        cout << "#" << t << "\n";
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << new90[i][j];
            }
            cout << " ";

            for(int j = 0; j < N; j++){
                cout << new180[i][j];
            }
            cout << " ";

            for(int j = 0; j < N; j++){
                cout << new270[i][j];
            }
            cout << "\n";
        }  
    }
    return 0; 
}