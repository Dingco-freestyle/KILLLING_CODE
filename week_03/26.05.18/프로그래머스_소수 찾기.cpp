#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>
#include <math.h>

using namespace std;

int k;
bool isused[10];
int arr[10];
string numbers;
unordered_set<int> S;

void func(int n){
    if(n >= 1){
        int num = 0;
        for(int i = 0 ; i < n ; i++){
            //cout << arr[i] << ' ' << pow(10, i) << ' ' << arr[i] * pow(10, i) << '\n';
            num += arr[i] * pow(10, i);
        }
        
        S.insert(num);
    }
    
    if(n == k){
        return;
    }
    
    for(int i = 0 ; i < k ; i++){
        if(!isused[i]){
            if(n == 0 && numbers[i] == '0') continue;
            arr[n] = numbers[i] - '0';
            isused[i] = true;
            func(n+1);
            isused[i] = false;
        }
    }
}

bool primeCheck(int num){
    if(num == 1) return false;
    if(num == 2) return true;
    
    for(int i = 2 ; i < num ; i++){
        if(num % i == 0) return false;
    }
    
    return true;
}


int solution(string num) {
    int answer = 0;
    k = num.size();
    numbers = num;
    
    
    func(0);
    
    for(auto& i : S) if(primeCheck(i)) answer++;
    
    
    
    return answer;
}
