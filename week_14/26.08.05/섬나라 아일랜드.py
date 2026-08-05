import sys
from collections import deque
# sys.stdin=open("input.txt","rt")

# BFS사용
if __name__=="__main__" :
    dx=[-1,-1,0,1,1,1,0,-1] #대각선 포함 8방향 탐색(시계방향)
    dy=[0,1,1,1,0,-1,-1,-1]
    cnt=0
    n=int(input())
    board=[list(map(int,input().split())) for i in range(n)]
    Q=deque()

    for i in range(n) :
        for j in range(n) :
            if board[i][j]==1 :
                board[i][j]=0
                Q.append((i,j)) #튜플
                while Q :
                    tmp=Q.popleft()
                    for k in range(8) :
                        x=tmp[0]+dx[k]
                        y=tmp[1]+dy[k]
                        if 0<=x<n and 0<=y<n and board[x][y]==1 :
                            board[x][y]=0
                            Q.append((x,y))
                cnt+=1 # 섬 개수
    print(cnt)


# #DFS 사용
# def DFS(x,y) :
#     global cnt
#     cnt+=1
#     board[x][y]=0
#
#     for i in range(8) :
#         xx=x+dx[i]
#         yy=y+dy[i]
#         if 0<=xx<n and 0<=yy<n and board[xx][yy]==1 :
#             DFS(xx,yy)
#
# if __name__=="__main__" :
#     dx=[-1,-1,0,1,1,1,0,-1] #대각선 포함 8방향 탐색(시계방향)
#     dy=[0,1,1,1,0,-1,-1,-1]
#     cnt=0
#     n=int(input())
#     board=[list(map(int,input().split())) for i in range(n)]
#     ch=[]
#
#     for i in range(n) :
#         for j in range(n) :
#             if board[i][j]==1 :
#                 cnt=0
#                 DFS(i,j)
#                 ch.append(cnt)
#
#     print(ch)
#     print(len(ch))
#     # for i in range(n) :
#     #     print(board[i])
