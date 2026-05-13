#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str1, str2;
    cin >> str1 >> str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1.size() != str2.size()){
        cout << "No";
        return 0;
    }

    for(int i = 0 ; i < str1.size() ; i++){
        if(str1[i] != str2[i]){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}