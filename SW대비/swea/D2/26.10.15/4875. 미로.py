# import sys
# sys.stdin = open("input.txt")
def dfs(x,y) :
    global res
    if board[x][y]==3 :
        res=1
    else :
        for i in range(4) :
            xx=x+dx[i]
            yy=y+dy[i]
            if 0<=xx<n and 0<=yy<n and (board[xx][yy]==0 or board[xx][yy]==3) :
                board[x][y]=1
                dfs(xx,yy)
if __name__=="__main__" :
    t=int(input())
    dx=[1,0,-1,0]
    dy=[0,-1,0,1]
    for tc in range(t) :
        n=int(input())
        board=[list(map(int,input())) for _ in range(n)]

        for i in range(n) :
            for j in range(n) :
                if board[i][j]==2 :
                    x=i
                    y=j

        res=0
        print(f"#{tc+1}",end=" ")
        dfs(x,y)
        print(res)
