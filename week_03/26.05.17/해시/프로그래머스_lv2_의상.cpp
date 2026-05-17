#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> comb;
    
    for (auto i : clothes){
        comb[i[1]]++;
    }
    
    for(auto i : comb){
        answer *= i.second + 1;
    }
    
    return answer - 1;
}