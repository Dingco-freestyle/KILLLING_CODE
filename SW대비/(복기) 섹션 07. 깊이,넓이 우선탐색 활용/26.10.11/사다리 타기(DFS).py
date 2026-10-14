import sys
# sys.stdin=open("input.txt")
def dfs(x,y) :
    ch[x][y]=1
    if x==0 :
        print(y)
        sys.exit(0)
    else :
        for i in range(3) :
            xx=x+dx[i]
            yy=y+dy[i]
            if 0<=xx<10 and 0<=yy<10 and board[xx][yy]==1 and ch[xx][yy]==0 :
                dfs(xx,yy)
if __name__=="__main__" :
    board=[list(map(int,input().split())) for _ in range(10)]
    ch=[[0]*10 for _ in range(10)]
    dx=[0,0,-1]
    dy=[-1,1,0]
    for i in range(10) :
        if board[9][i]==2 :
            s=i
            break
    dfs(9,s)