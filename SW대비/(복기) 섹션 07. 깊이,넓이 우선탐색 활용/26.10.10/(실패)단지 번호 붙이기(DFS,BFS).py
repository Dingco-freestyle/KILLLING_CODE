import sys
sys.stdin=open("input.txt")
from collections import deque

# BFS
if __name__=="__main__" :
    n=int(input())
    board=[list(map(int,input())) for _ in range(n)]
    cnt=0
    res=[]
    dx=[1,0,-1,0]
    dy=[0,-1,0,1]
    Q=deque()

    for i in range(n) :
        for j in range(n) :
            if board[i][j]==1 :
                cnt=0
                Q.append((i,j))
                while Q :
                    cnt += 1
                    board[i][j] = 0 #처음 잠금
                    tmp=Q.popleft()
                    for k in range(4) :
                        x=tmp[0]+dx[k]
                        y=tmp[1]+dy[k]
                        if 0<=x<n and 0<=y<n and board[x][y]==1 :
                            board[x][y] = 0 # 미리 잠금기
                            Q.append((x,y))
                res.append(cnt)
    print(len(res))
    for x in res :
        print(x)
# DFS
# def dfs(x,y) :
#     global cnt
#     cnt+=1
#     board[x][y]=0 #잠금
#
#     for i in range(4) :
#         xx=x+dx[i]
#         yy=y+dy[i]
#         if 0<=xx<n and 0<=yy<n and board[xx][yy]==1 :
#             dfs(xx,yy)
#if __name__ == "__main__":
#     n = int(input())
#     board = [list(map(int, input())) for _ in range(n)]
#     cnt = 0
#     res = []
#     dx = [1, 0, -1, 0]
#     dy = [0, -1, 0, 1]
#     for i in range(n) :
#         for j in range(n) :
#             if board[i][j]==1 :
#                 cnt=0
#                 dfs(i,j)
#                 res.append(cnt)
#     print(len(res))
#     for x in res :
#         print(x)


