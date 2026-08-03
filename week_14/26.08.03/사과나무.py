import sys
from collections import deque
# sys.stdin=open("input.txt","rt")

dx=[-1,0,1,0] #상하좌우
dy=[0,1,0,-1] #

n=int(input())
a=[list(map(int,input().split())) for _ in range(n)] #사과
ch=[[0]*n for _ in range(n)] #방문확인
sum=0
Q=deque()
ch[n//2][n//2]=1
sum+=a[n//2][n//2] #사과개수
Q.append((n//2,n//2))
L=0

while True :
    if L==n//2 : #레벨이 n//2이면 종료
        break

    size=len(Q)
    for i in range(size) : # Q의 노드 수만큼 반복
        tmp=Q.popleft() #pop하고
        for j in range(4) : # edge만큼 append
            x=tmp[0]+dx[j] #상하좌우
            y=tmp[1]+dy[j] #
            if ch[x][y]==0 : #방문 안했다면
                sum+=a[x][y] # +사과개수
                ch[x][y]=1 # 방문 잠금
                Q.append((x,y)) # 큐에 append
    # print(L,size)
    # for x in ch :
    #     print(x)
    L+=1 #자식노드 확인 다했으니까 레벨 +1


print(sum)