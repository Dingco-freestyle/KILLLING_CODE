import sys
sys.stdin=open("input.txt","rt")

def DFS(x,y) :
    global cnt
    if x==ex and y==ey :
        cnt+=1
    else :
        for i in range(4) :
            xx=x+dx[i]
            yy=y+dy[i]
            if 0<=xx<n and 0<=yy<n and ch[xx][yy]==0 and board[xx][yy]>board[x][y] : #파이썬에서 조건문은 왼쪽부터 확인
                # ch[xx][yy]==0 and board[xx][yy]>board[x][y]를 먼저 확인하면 indexError
                ch[xx][yy]=1
                DFS(xx,yy)
                ch[xx][yy]=0

if __name__ == "__main__" :
    n=int(input())
    board=[[0]*n for _ in range(n)]
    ch=[[0]*n for _ in range(n)]

    dx=[-1,0,1,0]
    dy=[0,1,0,-1]
    MAX=-21470000
    MIN=21470000

    for i in range(n) :
        tmp=list(map(int,input().split()))
        for j in range(n) :
            if MIN>tmp[j] :
                MIN=tmp[j]
                sx=i
                sy=j
            if MAX<tmp[j] :
                MAX=tmp[j]
                ex=i
                ey=j
            board[i][j]=tmp[j]
    cnt=0
    ch[sx][sy]=1
    # print(sx,sy,ex,ey,MIN,MAX)
    DFS(sx,sy)
    print(cnt)
    # print(ex,ey)

#