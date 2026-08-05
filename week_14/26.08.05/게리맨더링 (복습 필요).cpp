#include <bits/stdc++.h>
using namespace std;

int N, m, num, ans = 99999;
int arr[15], comp[15];
vector<int> adj[15];
int vis[15];

pair<int, int> dfs(int idx, int value){
    vis[idx] = 1;
    pair<int, int> ret = {1, arr[idx]};
    for(auto i : adj[idx]){
        if(comp[i] != value) continue;
        if(vis[i]) continue;
        pair<int, int> tmp = dfs(i, value);
        ret.first += tmp.first;
        ret.second += tmp.second;
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    // 입력 받고
    for(int i = 1 ; i <= N; i++) cin >> arr[i];
    for(int i = 1 ; i <= N ; i++){
        cin >> m;
        for(int j = 0 ; j < m ; j++){
            cin >> num;
            // 인접 배열 표시
            adj[i].push_back(num);
            adj[num].push_back(i);
        }
    }

    // 어차피 나눠야 하니까 1부터 N의 
    for(int i = 1 ; i < (1 << N) - 1; i++){
        fill(vis, vis + N + 1, 0);
        fill(comp, comp + N + 1, 0);
        int idx1 = -1, idx2 = -1;
        for(int j = 0 ; j < N ; j++){
            if(i & (1 << j)){
                comp[j + 1] = 1; idx1 = j + 1;
            }
            else idx2 = j + 1;
        }
        pair<int, int> comp1 = dfs(idx1, 1);
        pair<int, int> comp2 = dfs(idx2, 0);
        if(comp1.first + comp2.first == N) ans = min(ans, abs(comp1.second - comp2.second));
    }
    cout << (ans == 99999 ? -1 : ans);
    return 0;
}
