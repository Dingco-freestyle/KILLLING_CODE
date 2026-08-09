import sys
# sys.stdin=open("input.txt","rt")
sys.setrecursionlimit(10**6)
# 목적지부터 역으로 탐색
def DFS(x,y) :
    global res
    ch[x][y]=1

    if x==0 :
        print(y)
        exit(0)
    else :
        for i in range(3) :
            xx=x+dx[i]
            yy=y+dy[i]

            if 0<=xx<10 and 0<=yy<10 and board[xx][yy]==1 and ch[xx][yy]==0 :
                DFS(xx,yy)

if __name__ == "__main__" :
    dx=[0,0,-1]
    dy=[-1,1,0]

    board=[list(map(int,input().split())) for _ in range(10)]
    ch=[[0]*10 for _ in range(10)]

    for i in range(10) :
        if board[9][i]==2 :
            DFS(9,i)
