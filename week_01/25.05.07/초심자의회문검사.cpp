// 초심자의 회문 검사
// "level" 과 같이 거꾸로 읽어도 제대로 읽은 것과 같은 문장이나 낱말을 회문(回文, palindrome)이라 한다.
// 단어를 입력 받아 회문이면 1을 출력하고, 아니라면 0을 출력하는 프로그램을 작성하라.

#include <iostream>
using namespace std;
#include <vector>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    

    for(int i = 1; i <= T; i++){
        string S;
        cin >> S;

        vector<char> v1;
        vector<char> v2;

        for(char c : S){
            v1.push_back(c);
        }

        // 거꾸로 확인하는 부분을 헤맸네연
        for(int i = S.size() - 1; i >= 0; i-- ){
            v2.push_back(S[i]);
        }

        if(v1 == v2)
            cout << "#" << i << " " << 1 << "\n";
        else
            cout << "#" << i << " " << 0 << "\n";
    }
    return 0;
}

/*
더 효율적인 회문 검사
for(int i = 0; i < S.size() / 2; i++){
    if(S[i] != S[S.size() - 1 - i]){
        flag = false;
        break;
    }
}
*/
