#include <iostream>
using namespace std;

int arr[2005]; // N이 1000개니까 2배
int ans[1005];
int main() {
    // Please write your code here.
    int N;

    cin >> N;
    for(int i = 0 ; i < N * 2; i++){
        cin >> arr[i];
    }

    sort(arr, arr + N * 2);

    for(int i = 0 ; i < N ; i++){
        ans[i] = arr[i] + arr[N * 2 - 1 - i];
    }

    int max = -1;
    for(int i = 0 ; i < N ; i++){
        if(max < ans[i]) max = ans[i];
    }

    cout << max;

    return 0;
}