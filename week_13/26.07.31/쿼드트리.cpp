#include <bits/stdc++.h>
using namespace std;

char arr[70][70];

void func(int y, int x, int N){
    if(N == 1){
        cout << arr[y][x];
        return;
    }
    bool flag = false;
    for(int i = y ; i < y + N ; i++){
        for(int j = x ; j < x + N ; j++){
            if(arr[i][j] != arr[y][x]){
                cout << "(";
                func(y, x, N / 2);
                func(y, x + N / 2, N / 2);
                func(y + N / 2, x, N / 2);
                func(y + N / 2, x + N / 2, N / 2);
                cout << ")";
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag) cout << arr[y][x];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string str;

    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> str;
        for(int j = 0 ; j < N ; j++) arr[i][j] = str[j];
    }
    
    func(0, 0, N);
    
    return 0;
}
