#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_map <int, int> pocket;
    
    for(auto i : nums)
        pocket[i]++;
    
    int N = nums.size() / 2;
    
    answer = min(N, (int)pocket.size());
        
    
    return answer;
}