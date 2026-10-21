import sys
sys.stdin = open("input.txt")
from collections import deque
#bfs
if __name__ == "__main__":
    n,m=map(int,input().split())
    board=[list(map(int,input())) for _ in range(n)]
    dx=[1,0,-1,0]
    dy=[0,-1,0,1]
    Q=deque()
    Q.append((0,0))
    res=[[0]*m for _ in range(n)]
    while Q :
        tmp=Q.popleft()
        for i in range(4) :
            x=tmp[0]+dx[i]
            y=tmp[1]+dy[i]
            if 0<=x<n and 0<=y<m and board[x][y]==1 :
                res[x][y]=res[tmp[0]][tmp[1]]+1
                board[tmp[0]][tmp[1]]=0
                Q.append((x,y))

    print(res[n-1][m-1]+1)
# def dfs(x,y,res) :
#     global MIN
#
#     board[x][y]=0
#     if x==n-1 and y==m-1 :
#         if res<MIN :
#             MIN=res
#     else :
#         for i in range(4) :
#             xx=x+dx[i]
#             yy=y+dy[i]
#             if 0<=xx<n and 0<=yy<m and board[xx][yy]==1 :
#                 dfs(xx,yy,res+1)
# if __name__ == "__main__":
#     n,m=map(int,input().split())
#     board=[list(map(int,input())) for _ in range(n)]
#     dx=[1,0,-1,0]
#     dy=[0,-1,0,1]
#     MIN=2147000000
#     dfs(0,0,1)
#     print(MIN)

