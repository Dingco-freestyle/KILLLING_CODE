import sys
# sys.stdin=open("input.txt")
from collections import deque
if __name__=="__main__" :
    n=int(input())
    board=[list(map(int,input().split())) for _ in range(n)]
    dx=[1,0,-1,0]
    dy=[0,-1,0,1]
    s,e=n//2,n//2
    dQ=deque()
    dQ.append((s,e))
    L=0
    res=board[s][e]
    ch=[[0]*n for _ in range(n)]
    ch[s][e]=1
    while True :
        if L==n//2 :
            break
        size=len(dQ)
        for i in range(size) : # L 마다의 가짓수 1, 4 , 16, ...
            tmp = dQ.popleft()
            for j in range(4) : # 상 하 좌 우
                xx=tmp[0]+dx[j]
                yy=tmp[1]+dy[j]
                if ch[xx][yy]==0 :
                    dQ.append((xx,yy))
                    res+=board[xx][yy]
                    ch[xx][yy]=1
        L+=1
    print(res)
