#include <iostream>
using namespace std;

int A[105];
int B[105];
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> A[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin >> B[i];
    }

    sort(A, A + n);
    sort(B, B + n);

    for(int i = 0 ; i < n ; i++){
        if(A[i] != B[i]){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";


    return 0;
}