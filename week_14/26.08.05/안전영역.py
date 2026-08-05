import sys
# sys.stdin=open("input.txt","rt")
sys.setrecursionlimit(10**6)
# 파이썬에서 재귀사용할때 꼭 사용(10**6 넘어가면 재귀 종료)

def DFS(x,y,h) :

    ch[x][y]=1

    for i in range(4) :
        xx=x+dx[i]
        yy=y+dy[i]
        if 0<=xx<n and 0<=yy<n and ch[xx][yy]==0 and board[xx][yy]>h :
            DFS(xx,yy,h)


if __name__ == "__main__" :
    dx=[-1,0,1,0]
    dy=[0,1,0,-1]

    n=int(input())
    cnt=0
    res=0
    board=[list(map(int,input().split())) for _ in range(n)]

    for h in range(100) :
        ch=[[0]*n for _ in range(n)]
        cnt=0
        for i in range(n) :
            for j in range(n) :
                if ch[i][j]==0 and board[i][j]>h :
                    cnt+=1
                    DFS(i,j,h)
        res=max(res,cnt) #기존의 res와 cnt 비교

        if cnt==0 : # 최대높이까지만 돌고 멈춤
            break
    print(res)

#
# # 내 풀이
# def DFS(x,y) :
#
#     ch[x][y]=1
#     for i in range(4) :
#         xx=x+dx[i]
#         yy=y+dy[i]
#         if 0<=xx<n and 0<=yy<n and ch[xx][yy]==0 :
#             DFS(xx,yy)
#
#
# if __name__ == "__main__" :
#     dx=[-1,0,1,0]
#     dy=[0,1,0,-1]
#
#     n=int(input())
#     board=[list(map(int,input().split())) for _ in range(n)]
#     MAX=-21470000
#
#     for i in range(n) :
#         if MAX<max(board[i]) :
#             MAX=max(board[i])
#
#     res=-21470000
#     for i in range(MAX+1) :
#         ch = [[0] * n for _ in range(n)]
#
#         for j in range(n) :
#             for k in range(n) :
#                 if board[j][k]<=i :
#                     ch[j][k]=1
#
#         cnt=0
#         for j in range(n) :
#             for k in range(n) :
#                 if ch[j][k]==0 :
#                     DFS(j,k)
#                     cnt+=1
#         if res<cnt :
#             res=cnt
#
#     print(res)