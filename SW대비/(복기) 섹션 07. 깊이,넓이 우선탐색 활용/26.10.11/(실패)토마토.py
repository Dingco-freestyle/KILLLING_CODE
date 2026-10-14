import sys
sys.stdin=open("input.txt")
from collections import deque
sys.setrecursionlimit(10**6)

# **큐에 넣는 순서에 따라 탐색경로 달라짐**

if __name__=="__main__" :
    m,n=map(int,input().split())
    board=[list(map(int,input().split())) for _ in range(n)]
    dx=[1,0,-1,0]
    dy=[0,-1,0,1]
    Q=deque()
    dis = [[0] * m for _ in range(n)]
    for i in range(n) :
        for j in range(m) :
            if board[i][j]==1 :
                Q.append((i,j))
    if not Q :
        print(0)
        sys.exit(0)
    while Q :
        tmp=Q.popleft()
        for i in range(4) :
            x=tmp[0]+dx[i]
            y=tmp[1]+dy[i]
            if 0<=x<n and 0<=y<m and board[x][y]==0 :
                Q.append((x,y))
                dis[x][y]=dis[tmp[0]][tmp[1]]+1
                board[x][y]=1
    flag=0
    for i in range(n) :
        for j in range(m) :
            if board[i][j]==0 :
                flag=1
                break
    if flag==1 :
        print(-1)
    else :
        res=0
        for i in range(n) :
            for j in range(m) :
                if res<dis[i][j] :
                    res=dis[i][j]
        print(res)