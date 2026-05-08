#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case;
    int T;
    
    cin>>T;
   
     
     int N;
    for(int i = 1; i <= T; i++)
    {
    cin >> N;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
        // 소인수 분해
         while(N % 2 ==0){
            N = N / 2;
            a++;
        }
        while(N % 3 ==0){
            N = N / 3;
            b++;
        }
        while(N % 5 ==0){
            N = N / 5;
            c++;
        }
        while(N % 7 ==0){
            N = N / 7;
            d++;
        }
        while(N % 11 ==0){
            N = N / 11;
            e++;
        }
        cout << "#" << i << " ";
        cout << a << " " << b << " " << c << " " << d << " " << e << "\n";
    }
    return 0;
    //정상종료시 반드시 0을 리턴해야합니다.
}
