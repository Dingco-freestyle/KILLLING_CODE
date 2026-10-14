import sys
# sys.stdin=open("input.txt")
sys.setrecursionlimit(10**6)
#DFS
def dfs(x,y) :
    global cnt
    res[x][y]=0
    for i in range(4) :
        xx=x+dx[i]
        yy=y+dy[i]
        if 0<=xx<n and 0<=yy<n and res[xx][yy]==1 :
            dfs(xx,yy)
if __name__=="__main__" :
    n=int(input())
    board=[list(map(int,input().split())) for _ in range(n)]
    MAX=0
    for i in range(n) :
        for j in range(n) :
            if board[i][j]>MAX :
                MAX=board[i][j]

    res=[[0]*n for _ in range(n)]
    dx=[1,0,-1,0]
    dy=[0,-1,0,1]
    safe=[]
    for i in range(1,MAX+1) :
        for j in range(n) :
            for k in range(n) :
                if board[j][k]>i :
                    res[j][k]=1
        cnt=0
        for j in range(n) :
            for k in range(n) :
                if res[j][k]==1 :
                    dfs(j,k)
                    cnt+=1
        safe.append(cnt)

    print(max(safe))
# BFS
# from collections import deque
# if __name__=="__main__" :
#     n=int(input())
#     board=[list(map(int,input().split())) for _ in range(n)]
#     res=[[0]*n for _ in range(n)]
#     dx=[1,0,-1,0]
#     dy=[0,-1,0,1]
#     MAX=0
#     safe=[]
#     for i in range(n) :
#         for j in range(n) :
#             if board[i][j]>MAX :
#                 MAX=board[i][j]
#     for i in range(1,MAX+1) :
#         for j in range(n) :
#             for k in range(n) :
#                 if board[j][k]>i :
#                     res[j][k]=1
#                 else :
#                     res[j][k]=0
#         Q=deque()
#         cnt=0
#         for j in range(n) :
#             for k in range(n) :
#                 if res[j][k]==1 :
#                     res[j][k]=0
#                     Q.append((j,k))
#                     while Q :
#                         tmp=Q.popleft()
#                         for s in range(4) :
#                             x=tmp[0]+dx[s]
#                             y=tmp[1]+dy[s]
#                             if 0<=x<n and 0<=y<n and res[x][y]==1 :
#                                 Q.append((x,y))
#                                 res[x][y]=0
#                     cnt+=1
#         safe.append(cnt)
#     print(max(safe))
