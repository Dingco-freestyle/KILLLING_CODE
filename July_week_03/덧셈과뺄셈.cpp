// SWEA 26792 덧셈과 뺄셈

#include <iostream>
using namespace std;

int main(){

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int x, y;
        cin >> x >> y;

        int A = (x + y) / 2;
        int B = (x - y) / 2;

        cout << A << ' ' << B;
        cout << "\n";
    }
    return 0;
}