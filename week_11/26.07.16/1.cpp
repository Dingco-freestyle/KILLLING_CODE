#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 모듈러는 ( A * B ) % C = A % C * B % C
    // 자리수를 출력하라했는데 이걸 발견 못했음
    while(scanf("%d", &n) != EOF){
        int cnt = 1; int num = 1;
        while(1){
            if(num % n){ // 나머지가 0이 아니면
                num = (num * 10) % n + 1;
                cnt++;
            }
            else{
                cout << cnt << '\n';
                break;
            }
        }
    }

    return 0;
}
