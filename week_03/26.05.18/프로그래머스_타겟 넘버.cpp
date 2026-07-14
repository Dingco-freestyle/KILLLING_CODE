#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> nums;
int t, k;
char arr[25];
int pm[2];
int ans;

void func(int n){
    if(n == k){
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == '+') sum += nums[i];
            else if(arr[i] == '-') sum -= nums[i];
        }
        
        if(sum == t) ans++;
        
        return;
    }
    
    for(int i = 0 ; i < 2; i++){
        if(pm[i] > 0){
            pm[i] -= 1;
            if(i == 0) arr[n] = '+';
            else arr[n] = '-';
            func(n+1);
            pm[i] += 1;
        }
    }
}

int solution(vector<int> numbers, int target) {
    nums = numbers;
    t = target;
    k = nums.size();
    pm[0] = k; pm[1] = k;
    
    func(0);
    
    return ans;
}
