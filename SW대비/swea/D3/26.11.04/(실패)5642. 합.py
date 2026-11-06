# import sys
# sys.stdin=open("input.txt","rt")
# *dp : 카데인 알고리즘
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        arr=list(map(int,input().split()))

        dp=[0]*n
        dp[0]=arr[0]
        for i in range(1,n) :
            dp[i] = max(arr[i], dp[i-1] + arr[i])

        print(f"#{tc} {max(dp)}")