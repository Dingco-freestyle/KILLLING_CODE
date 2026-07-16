#include <bits/stdc++.h>
using namespace std;

int N, M;
string str;
map<int, string> m;
map<string, int> m2;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for(int i = 1 ; i <= N ; i++){
        cin >> str;
        // 2개를 원하는 경우엔 그냥 map을 2가지 쓰자.
        m.insert({i, str});
        m2.insert({str, i});
    }

    for(int i = 0 ; i < M ; i++){
        cin >> str;
        if(atoi(str.c_str()) == 0){
            cout << m2[str] << '\n';
        }
        else{
            cout << m[atoi(str.c_str())] << '\n';
        }
    }

    return 0;
}
