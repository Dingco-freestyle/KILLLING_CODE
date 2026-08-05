import sys
from collections import deque
# sys.stdin=open("input.txt","rt")
sys.setrecursionlimit(10**6)

dx=[-1,0,1,0]
dy=[0,1,0,-1]

m,n=map(int,input().split())
board=[list(map(int,input().split())) for _ in range(n)]
dis=[[0]*m for _ in range(n)]
Q=deque()


for i in range(n) :
    for j in range(m) :
        if board[i][j]==1 :
            Q.append((i,j))

while Q :
    tmp=Q.popleft()
    for i in range(4) :
        xx=tmp[0]+dx[i]
        yy=tmp[1]+dy[i]
        if 0<=xx<n and 0<=yy<m and board[xx][yy]==0 :
            dis[xx][yy]=(dis[tmp[0]][tmp[1]])+1
            board[xx][yy]=1
            Q.append((xx,yy))

flag=1
for i in range(n) :
    for j in range(m) :
        if board[i][j]==0 :
            flag=0
result=0
if flag==1 :
    for i in range(n):
        for j in range(m):
            if dis[i][j]>result :
                result=dis[i][j]
    print(result)
else :
    print(-1)
