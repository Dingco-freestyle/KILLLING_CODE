import sys
sys.stdin = open("input.txt")

if __name__ == "__main__":
    n=int(input())
    arr=list(map(int,input().split()))
    dp=[1]*n
    for i in range(1,n) :
        for j in range(0,i) :
            if arr[j] < arr[i] :
                dp[i]=max(dp[i],dp[j]+1)
    print(dp)
    print(n-max(dp))