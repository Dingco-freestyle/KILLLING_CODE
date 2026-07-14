#include <bits/stdc++.h>
using namespace std;

int arr[26];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;
    
    for(char i : S) arr[i - 'a']++;

    for(auto i : arr) cout << i << ' ';

    return 0;
}
