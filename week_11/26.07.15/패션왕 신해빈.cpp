#include <bits/stdc++.h>
using namespace std;

int T, n;
string str1, str2;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> T;
    while(T--){
        cin >> n;
        map<string, int> m;
        while(n--){
            cin >> str1 >> str2;
            m[str2]++;
        }
        
        // 안입는 경우의 수까지 체크해서 조합에 넣어버리고
        // 아예 안입는 경우의 수 빼기
        int ans = 1;
        for(auto i : m){
            ans *= (i.second + 1);
        }
        ans--;

        cout << ans << '\n';
    }
    return 0;
}
