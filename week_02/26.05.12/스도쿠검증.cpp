// 스도쿠 검증

#include <iostream>
using namespace std;
#include <vector>

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        vector<vector<int>> arr(9, vector<int>(9, 0));

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cin >> arr[i][j];
            }
        }

        //(핵심)
        // 오답 : sum == 45 논리보다는 
        // 중복 체크를 사용하는 것이 정석
        // * 스도쿠는 합이 아니라 "중복 검사" 문제라는 점

        // 한 행씩 점검하기
        bool flag1 = true; // flag는 true로 시작해야한다.
        for(int i = 0; i < 9 ; i++){
            bool check[10] = {false};
            for(int j = 0; j < 9; j++){
                int num = arr[i][j];
                if(check[num]){
                    // 이미 중복되는 숫자가 있다면
                    flag1 = false;
                    break;
                }
                check[num] = true;  
            }
            if(!flag1)
                break;
        }

        // 한 열씩 점검하기
        bool flag2 = true;
        for(int j = 0; j < 9; j++){
            bool check2[10] = {false};
            for(int i = 0; i < 9; i++){
                int num2 = arr[i][j];
                if(check2[num2]){
                    // 이미 중복되는 숫자가 있다면
                    flag2 = false;
                    break;
                }
                check2[num2] = true;
            }
            if(!flag2)
                break;
        }

        // 3x3 격자씩 점검하기
        bool flag3 = true;
        for(int i = 0; i <= 6; i += 3){
            for(int j = 0; j <= 6; j += 3){
                bool check3[10] = {false};
                for(int a = i; a < i + 3; a++){
                    for(int b = j; b < j + 3; b++){
                        int num3 = arr[a][b];
                        if(check3[num3]){
                        // 이미 중복되는 숫자가 있다면
                            flag3 = false;
                            break;
                        }
                        check3[num3] = true;    
                    }
                    if(!flag3)
                        break;
                }
                if(!flag3)
                    break;
            }
            if(!flag3)
                break;
        }

        if(flag1 && flag2 && flag3)
            cout << "#" << i << ' ' << 1 << "\n";
        else
            cout << "#" << i << ' ' << 0 << "\n";
    }
    return 0;
}