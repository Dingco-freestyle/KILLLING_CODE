#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i = 0 ; i < commands.size() ; i++){
        int S = commands[i][0] - 1; int E = commands[i][1] - 1; int T = commands[i][2];
        vector<int> tmp;
        for(int j = 0 ; j <= E - S ; j++){
            tmp.push_back(array[S + j]);
        }
        sort(tmp.begin(), tmp.end());
        
        answer.push_back(tmp[T-1]);
    }
    
    return answer;
}