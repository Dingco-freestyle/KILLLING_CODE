#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 1;
    
    while(1){
        if(answer * answer == n) {
            answer += 1;
            
            return answer * answer;
        }
        
        if(answer * answer > n) {
            answer = -1;
            break;
        }
        
        answer += 1;
    }
    
    return answer;
}
