# import sys
# sys.stdin = open("input.txt", "rt")
from collections import deque
if __name__ == "__main__":
    t = int(input())
    dx = [1, 0, -1, 0]
    dy = [0, -1, 0, 1]
    for tc in range(1, t + 1):
        n, m = map(int, input().split())
        A=[]
        for i in range(n):
            s = list(input())
            A.append(s)

        Q=deque()
        res="possible"
        for i in range(n) :
            for j in range(m) :
                if A[i][j]=='#' or A[i][j]=='.' :
                    Q.append((i,j))
                    while Q :
                        tmp=Q.popleft()
                        for k in range(4) :
                            x=tmp[0]+dx[k]
                            y=tmp[1]+dy[k]
                            if 0<=x<n and 0<=y<m :
                                if A[tmp[0]][tmp[1]]==A[x][y] :
                                    res="impossible"
                                    break

                                if A[x][y]=='?' :
                                    if A[tmp[0]][tmp[1]]=='#' :
                                        A[x][y]='.'
                                    if A[tmp[0]][tmp[1]]=='.' :
                                        A[x][y]='#'
                                    Q.append((x,y))

        print(f"#{tc} {res}")









# import sys
# sys.stdin = open("input.txt", "rt")
#
# if __name__ == "__main__":
#     t = int(input())
#     dx = [1, 0, -1, 0]
#     dy = [0, -1, 0, 1]
#     for tc in range(1, t + 1):
#         n, m = map(int, input().split())
#         A=[]
#         for i in range(n):
#             s = list(input())
#             A.append(s)
#         res = "possible"
#         for i in range(n):
#             for j in range(m):
#                 if A[i][j] == '#' or A[i][j] == ".":
#                     for k in range(4):
#                         x = i + dx[k]
#                         y = j + dy[k]
#                         if 0 <= x < n and 0 <= y < m:
#                             if A[i][j] == A[x][y]:
#                                 res = "impossible"
#                                 break
#                             else:
#                                 if A[i][j] == '#' and A[x][y] == '?':
#                                     A[x][y] = "."
#                                 if A[i][j] == "." and A[x][y] == '?':
#                                     A[x][y] = '#'
#
#         print(f"#{tc} {res}")
