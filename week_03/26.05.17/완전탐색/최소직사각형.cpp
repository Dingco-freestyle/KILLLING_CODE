#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    for(auto& i : sizes){
        if(i[0] < i[1]) swap(i[0], i[1]);
    }
    
    int maxW = -1, maxH = -1;
    for(auto i : sizes){
        if(i[0] > maxW) maxW = i[0];
        if(i[1] > maxH) maxH = i[1];
    }
    
    answer = maxW * maxH;
    
    return answer;
}