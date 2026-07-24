#include <string>
#include <vector>

using namespace std;

int k;
bool isused[5005];
vector<vector<int>> d;
int hp;
int ans;

void func(int n){
    if(ans < n) ans = n;
    if(n == k){
        return;
    }
    for(int i = 0 ; i < k ; i++){
        if(!isused[i] && hp >= d[i][0]){
            hp -= d[i][1];
            isused[i] = true;
            func(n+1);
            hp += d[i][1];
            isused[i] = false;
        }
    }
}

int solution(int h, vector<vector<int>> dungeons) {
    k = dungeons.size();
    d = dungeons;
    hp = h;
    
    func(0);
    
    return ans;
}