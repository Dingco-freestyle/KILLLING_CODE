#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int student[35];
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> lost_st;
    
    for(int i = 1 ; i <= n ; i++) student[i] = 1;
    
    for(auto i : reserve) student[i] += 1;
    for(auto i : lost){
        student[i] -= 1;
        if(!student[i]) lost_st.push_back(i);
    }
    
    sort(lost_st.begin(), lost_st.end());

    for(auto i : lost_st){
        if(student[i - 1] >= 2){
            student[i] += 1;
            student[i - 1] -= 1;
        }
        else if(student[i + 1] >= 2){
            student[i] += 1;
            student[i + 1] -= 1;
        }
    }
    
    for(int i = 1 ; i <= n ; i++) if(student[i] > 0) answer++;
    
    return answer;
}
