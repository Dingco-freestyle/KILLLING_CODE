# import sys
# sys.stdin = open("input.txt")
def dfs(L,res) :
    global MIN
    if res>MIN :
        return
    if L==n :
        if res<MIN :
            MIN=res
    else :
        for i in range(n) :
            if ch[i]==0 :
                ch[i]=1
                dfs(L+1,res+board[L][i])
                ch[i]=0

if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        n=int(input())
        board=[list(map(int,input().split())) for _ in range(n)]
        MIN=2147000000
        ch=[0]*n
        dfs(0,0)
        print(f"#{tc+1} {MIN}")