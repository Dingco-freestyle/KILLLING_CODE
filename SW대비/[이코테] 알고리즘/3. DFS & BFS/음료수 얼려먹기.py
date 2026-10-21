import sys
sys.stdin = open("input.txt")
from collections import deque
# DFS
def dfs(x,y) :
    board[x][y]=1
    for i in range(4) :
        xx=x+dx[i]
        yy=y+dy[i]
        if 0<=xx<n and 0<=yy<m and board[xx][yy]==0 :
            dfs(xx,yy)

if __name__ == "__main__":
    n, m = map(int, input().split())
    board = [list(map(int, input())) for _ in range(n)]
    Q = deque()
    dx = [1, 0, -1, 0]
    dy = [0, -1, 0, 1]
    res=0
    for i in range(n) :
        for j in range(m) :
            if board[i][j]==0 :
                dfs(i,j)
                res+=1
    print(res)

# #BFS
# if __name__ == "__main__":
#     n, m = map(int, input().split())
#     board = [list(map(int, input())) for _ in range(n)]
#     Q = deque()
#     dx = [1, 0, -1, 0]
#     dy = [0, -1, 0, 1]
#     res = 0
#     for i in range(n):
#         for j in range(m):
#             if board[i][j] == 0:
#                 board[i][j] = 1
#                 Q.append((i, j))
#                 while Q:
#                     tmp = Q.popleft()
#                     for k in range(4):
#                         x = tmp[0] + dx[k]
#                         y = tmp[1] + dy[k]
#                         if 0 <= x < n and 0 <= y < m and board[x][y] == 0:
#                             board[x][y]=1
#                             Q.append((x, y))
#                 res+=1
#     print(res)
