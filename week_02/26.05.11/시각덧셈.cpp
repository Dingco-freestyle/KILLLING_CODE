// 시각 덧셈

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int h1, m1, h2, m2;
        cin >> h1 >> m1 >> h2 >> m2;

        int total_hour = h1 + h2;
        int total_min = m1 + m2;

        if(total_hour > 12){
            total_hour = total_hour % 12;
        }

        if(total_min >= 60){
            total_hour += 1;
            total_min = total_min % 60;
            if(total_hour > 12){
                total_hour = total_hour % 12;
            }
        }
        cout << "#" << i << ' ' << total_hour << ' ' << total_min << "\n";

    }
    return 0;
}   