import sys
sys.stdin = open("input.txt", "rt")

if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        n=int(input())
        arr=list(map(int,input().split()))
        dp=[1]*n
        for i in range(n) :
            for j in range(i) :
                if arr[i]>=arr[j] :
                    dp[i]=max(dp[i],dp[j]+1)

        print(f"#{tc+1} {max(dp)}")