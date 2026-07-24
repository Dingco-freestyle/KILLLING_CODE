#include <iostream>
using namespace std;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    // Please write your code here.
    int m1, m2, d1, d2;
    int ans = 0;

    cin >> m1 >> d1 >> m2 >> d2;

    if(m1 == m2){
        cout << d2 - d1 + 1;
        return 0;
    }

    ans += days[m1] - d1 + 1;
    m1 += 1;

    for(int i = m1 ; i < m2 ; i++){
        ans += days[i];
    }

    ans += d2;

    cout << ans;


    return 0;
}