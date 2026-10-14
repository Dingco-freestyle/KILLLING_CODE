import sys
# sys.stdin=open("input.txt")
def dfs(x,y) :
    global res
    if x==ex and y==ey :
        res+=1
    else :
        for i in range(4) :
            xx=x+dx[i]
            yy=y+dy[i]
            if 0<=xx<n and 0<=yy<n and board[x][y]<board[xx][yy] and ch[xx][yy]==0 :
                ch[x][y]=1
                dfs(xx,yy)
                ch[x][y]=0
if __name__=="__main__" :
    n=int(input())
    board=[list(map(int,input().split())) for _ in range(n)]
    ch=[[0]*n for _ in range(n)]
    MIN=2147000000
    MAX=-2147000000
    for i in range(n) :
        for j in range(n) :
            if board[i][j]<MIN :
                MIN=board[i][j]
            if board[i][j]>MAX :
                MAX=board[i][j]
    sx,sy=0,0
    ex,ey=0,0
    for i in range(n) :
        for j in range(n) :
            if MIN==board[i][j] :
                sx,sy=i,j
            if MAX==board[i][j] :
                ex,ey=i,j
    dx=[1,0,-1,0]
    dy=[0,-1,0,1]
    res=0
    dfs(sx,sy)
    print(res)