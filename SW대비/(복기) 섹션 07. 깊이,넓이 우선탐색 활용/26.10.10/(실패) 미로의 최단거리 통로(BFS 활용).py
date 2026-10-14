import sys
# sys.stdin=open("input.txt")
# 잠금 생각 (최단거리니 다른경우가 최단거리가 되지않게 잠금해제하지않음)
from collections import deque
if __name__=="__main__" :
    board=[list(map(int,input().split())) for _ in range(7)]
    Q=deque()
    Q.append((0,0))
    res=[[0]*7 for _ in range(7)]
    dx=[1,0,-1,0]
    dy=[0,-1,0,1]

    while Q :
        tmp=Q.popleft()
        for i in range(4) :
            x=tmp[0]+dx[i]
            y=tmp[1]+dy[i]
            if 0<=x<7 and 0<=y<7 and board[x][y]==0 :
                res[x][y]=res[tmp[0]][tmp[1]]+1
                board[tmp[0]][tmp[1]]=1 # 잠금
                Q.append((x,y))
    if res[6][6]==0 :
        print(-1)
    else :
        print(res[6][6])