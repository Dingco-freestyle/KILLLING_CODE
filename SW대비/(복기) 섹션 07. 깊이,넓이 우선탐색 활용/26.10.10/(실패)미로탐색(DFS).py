import sys
# sys.stdin=open("input.txt")

# back 했을때 잠금 해제
def dfs(x,y) :
    global res
    if x==6 and y==6 :
        res+=1
    else :
        for i in range(4) :
            xx=x+dx[i]
            yy=y+dy[i]
            if 0<=xx<7 and 0<=yy<7 and board[xx][yy]==0 :
                board[x][y]=1
                dfs(xx,yy)
                board[x][y]=0 # back 했을때 잠금 해제
if __name__=="__main__" :
    board=[list(map(int,input().split())) for _ in range(7)]
    dx=[1,0,-1,0]
    dy=[0,-1,0,1]
    res=0
    dfs(0,0)
    print(res)