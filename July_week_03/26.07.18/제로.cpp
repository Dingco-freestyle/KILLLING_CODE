// SWEA D3 8931 제로

#include <iostream>
using namespace std;
#include <vector>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int TC;
    cin >> TC;

    for(int t = 1; t <= TC; t++){
        int K;
        cin >> K;
        vector<int> V1;
        int sum = 0;

        for(int i = 0; i < K; i++){
            int price;
            cin >> price;
            
            if(price != 0)
                V1.push_back(price);

            else
                V1.pop_back();
        }
        for(int x : V1)
            sum += x;
            
        cout << "#" << t << ' ' << sum << "\n";
    }
    return 0;
}