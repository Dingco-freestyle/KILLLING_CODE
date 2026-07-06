// [완전탐색] 두 개의 숫자열

#include <iostream>
using namespace std;
#include <vector>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        long long maxSum = 0;
        int N, M;
        cin >> N >> M;
        vector<int> v1;
        vector<int> v2;

        for(int i = 0; i < N; i++){
            int p1;
            cin >> p1;
            v1.push_back(p1);
        }
        for(int i = 0; i < M; i++){
            int p2;
            cin >> p2;
            v2.push_back(p2);
        }

        if(N > M){
            swap(v1, v2);
            swap(N, M);
        }

        for(int k = 0; k <= M - N; k++){
            long long sum = 0;
            for(int i = 0; i < N; i++){
                sum += v1[i] * v2[i + k];
            }
            maxSum = max(maxSum, sum);
        }
        cout << "#" << i << ' ' << maxSum << "\n";
    }
    return 0;
}