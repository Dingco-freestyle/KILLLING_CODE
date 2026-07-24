#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, C, D;
    int ans = 0;

    cin >> A >> B >> C >> D;

    if(B > D){
        ans += 60 - B;
        B = 0;
        A += 1;
    }

    ans += D - B;
    ans += (C - A) * 60;

    cout << ans;

    return 0;
}