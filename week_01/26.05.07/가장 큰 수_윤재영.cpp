#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(const string& a, const string& b){
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> string_numbers;
    
    for(auto i : numbers) string_numbers.push_back(to_string(i));
    
    sort(string_numbers.begin(), string_numbers.end(), compare);

    if(string_numbers[0] == "0") {
        answer += "0";
        return answer;
    }
    
    for(auto i : string_numbers) answer += i;
    
    return answer;
}