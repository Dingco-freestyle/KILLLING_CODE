import sys
sys.stdin=open("input.txt")
if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        n, k = map(int, input().split())
        board=[list(map(int,input().split())) for _ in range(n)]

        cnt=0
        res=0
        for i in range(n) :
            cnt=0

            for j in range(n) :
                if board[i][j]==1 :
                    cnt+=1
                if board[i][j]==0 or j==n-1 :
                    if cnt==k :
                        res+=1
                    cnt=0

            for j in range(n):
                if board[j][i] == 1:
                    cnt += 1
                if board[j][i] == 0 or j == n - 1:
                    if cnt == k:
                        res += 1
                    cnt=0
        print("#{} {}".format(tc+1,res))