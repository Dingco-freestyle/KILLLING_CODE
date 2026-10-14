import sys
sys.stdin=open("input.txt")
from collections import deque
#BFS
if __name__=="__main__" :
    n=int(input())
    board=[list(map(int,input().split())) for _ in range(n)]
    Q=deque()
    dx=[1,1,0,-1,-1,-1,0,1]
    dy=[0,-1,-1,-1,0,1,1,1]
    cnt=0
    for i in range(n) :
        for j in range(n) :
            if board[i][j]==1 :
                board[i][j]=0 #
                Q.append((i,j)) #
                while Q :
                    tmp=Q.popleft()
                    for k in range(8) :
                        x=tmp[0]+dx[k]
                        y=tmp[1]+dy[k]

                        if 0<=x<n and 0<=y<n and board[x][y]==1 :
                            board[x][y]=0 #
                            Q.append((x,y))
                cnt+=1
    print(cnt)

# DFS
# def dfs(x,y) :
#     global cnt
#     cnt+=1
#     board[x][y]=0
#
#     for i in range(8) :
#         xx=x+dx[i]
#         yy=y+dy[i]
#         if 0<=xx<n and 0<=yy<n and board[xx][yy]==1 :
#             dfs(xx,yy)
# if __name__=="__main__" :
#     n=int(input())
#     board=[list(map(int,input().split())) for _ in range(n)]
#     dx=[1,0,-1,0,1,1,-1,-1]
#     dy=[0,-1,0,1,1,-1,-1,1]
#     res=[]
#     for i in range(n) :
#        for j in range(n) :
#            if board[i][j]==1 :
#                cnt=0
#                dfs(i,j)
#                res.append(cnt)
#     print(len(res))