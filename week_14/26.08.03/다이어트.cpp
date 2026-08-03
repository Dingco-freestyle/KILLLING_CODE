#include <bits/stdc++.h>
using namespace std;

int arr[20][5];
int N, mp, mf, ms, mv, mm = 10000, tS;
map<int, vector<vector<int>>> m;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 개수 입력받고
    cin >> N;
    // 최소 입력 받고
    cin >> mp >> mf >> ms >> mv;
    // 다 입력 받은 후에
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < 5 ; j++) cin >> arr[i][j];
    }

    // 그냥 전체를 비교하면 되나?
    // 개수 설정
    for(int i = 0 ; i < (1 << N) ; i++){
        int tp = 0, tf = 0, ts = 0, tv = 0, tm = 0;
        vector<int> v;
        for(int j = 0 ; j < N ; j++){
            if(i & (1 << j)){
                v.push_back(j + 1);
                tp += arr[j][0];
                tf += arr[j][1];
                ts += arr[j][2];
                tv += arr[j][3];
                tm += arr[j][4];
            }
        }
        //cout << '\n';
        //cout << tp << ' ' << tf << ' ' << ts << ' ' << tv << ' ' << tm << '\n';
        if(tp >= mp && tf >= mf && ts >= ms && tv >= mv && tm <= mm){
            mm = tm;
            m[tm].push_back(v);
            //cout << "change : " << mm << ' ' << tS << '\n';
        }
    }

    if(mm == 10000){
        cout << -1;
        return 0;
    }

    sort(m[mm].begin(), m[mm].end());

    cout << mm << '\n';
    for(auto i : m[mm][0]) cout << i << ' ';

    return 0;
}
