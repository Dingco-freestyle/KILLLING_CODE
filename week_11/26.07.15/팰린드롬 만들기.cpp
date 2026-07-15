#include <bits/stdc++.h>
using namespace std;

string str, ans = "";
map<char, int> m;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> str;
    for(char c : str) m[c]++;

    int flag = 0;
    char mid;
    for(auto c = 'Z' ; c >= 'A' ; c--){
        if(m[c]){
            // 1이랑 & 연산자 사용해서 비교해서 홀수인 거 구분할 수 있음
            if(m[c] & 1){
                mid = c; m[c]--;
                flag++;
            }
            // 어차피 해야 할 상황이면 flag를 int로 받기
            if(flag == 2){
                cout << "I'm Sorry Hansoo";
                return 0;
            }
            else{
                for(int i = 0 ; i < m[c] ; i += 2){
                    // 앞 뒤로 넣어야 하는 상황이면 이런 식으로
                    ans += c;
                    ans = c + ans;
                }
            }
        }
    }
    // 문자열.insert(위치, 문자열)
    if(flag) ans.insert(ans.begin() + ans.size() / 2, mid);
    
    cout << ans;
    return 0;
}
