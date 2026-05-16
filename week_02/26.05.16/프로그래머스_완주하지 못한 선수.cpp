#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> S;

    for (auto& i : participant) {
        S[i]++;
    }
    for (auto& c : completion) {
        if (--S[c] == 0) S.erase(c);
    }
    for (auto& p : S) answer += p.first;

    return answer;
}