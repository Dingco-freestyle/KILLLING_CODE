#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N, num;
    vector <int> v, tmp;

    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> num;
        v.push_back(num);

        if(i % 2 == 0){
            tmp = v;
            sort(tmp.begin(), tmp.end());

            cout << tmp[tmp.size() / 2] << ' ';
        }
    }
    
    return 0;
}