#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int arr1[5] = {1, 2, 3, 4, 5};
int arr2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
int arr3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int score[4] = {0};
    for(int i = 0 ; i < answers.size() ; i++){
        if(answers[i] == arr1[i % 5]) score[1]++;
        if(answers[i] == arr2[i % 8]) score[2]++;
        if(answers[i] == arr3[i % 10]) score[3]++;
    }
    
    answer.push_back(1);
    if(score[1] == score[2]) answer.push_back(2);
    else if(score[1] < score[2]) answer[0] = 2;
    
    if(score[answer[0]] == score[3]) answer.push_back(3);
    else if(score[answer[0]] < score[3]) answer[0] = 3;
    
    sort(answer.begin(), answer.end());
    
    return answer;
}