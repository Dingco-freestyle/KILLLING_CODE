// 가랏! RC카!

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){     
        int N; // 커맨드 수
        cin >> N;
        int d = 0; // 이동거리
        // int sec = 1; // 커맨드 하나당 1초 <-- 불필요
        int a; // 0-그대로, 1-가속, 2-감속, 
        int current_speed = 0; // 감속의 경우를 위한 현재 속도 누적
        int speed = 0; // 가속도 값
        for(int i = 0; i < N; i++){
            cin >> a;

            // (주의) a가 0일 때 speed 입력 값은 없다.
            if(a != 0) 
                cin >> speed; 

            // while문이 필요 없음!
            
            if(a == 1){
                current_speed += speed;
                d += current_speed;
            }
            else if(a == 2){
                // 현재 문제점
                // 감속일 때 speed를 줄이는 법
                current_speed -= speed;
                // 해법 --> 변수를 하나 더 만들어 스피드를 누적시킨다
                if(current_speed < 0) 
                    current_speed = 0;

                d += current_speed ;
            }
            else{
                d += current_speed;   
            }
        }
        cout << "#" << i << ' ' << d << "\n";
    }
    return 0;
}