#include <bits/stdc++.h>
using namespace std;

long long ans = 1;
long long C;

// 재귀함수 이용해서 중복되는 부분 없애기
// 모듈러는 (A * B) % C = A % C * B % C
long long func(long long A, long long B){
  if(B == 1) return A % C;
  
  long long tmp = func(A, B / 2);
  tmp = (tmp * tmp) % C;
  if(B % 2) tmp = (tmp * A) % C;
  return tmp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long A, B;
    long long ans = 1;

    cin >> A >> B >> C;
    cout << func(A, B);

    return 0;
}
