#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    string T, str;
    vector<string> v;

    cin >> N >> K >> T;
    while(N--){
        cin >> str;
        bool flag = false;
        
        for(int i = 0 ; i < T.size() ; i++){
            if(T[i] != str[i]){
                flag = true;
                break;
            }
        }

        if(!flag) v.push_back(str);
    }

    sort(v.begin(), v.end());

    cout << v[K - 1];


    return 0;
}