import sys
from collections import deque
# sys.stdin=open("input.txt","rt")

MAX=10000
ch=[0]*(MAX+1) #방문확인 리스트
dis=[0]*(MAX+1) #거리 리스트
n,m=map(int,input().split())
ch[n]=1 # n번 인덱스 방문
dis[n]=0 # n번 인덱스 거리=0
dQ=deque()
dQ.append(n)

# 큐에서 pop하면 연결된 다음 노드들 삽입
while dQ:
    now=dQ.popleft()
    if now==m :
        break
    for next in(now+1,now-1,now+5) : # 세가지 연결된 노드 삽입과정(3번)
        if 0<next<=MAX :
            if ch[next]==0 : #첫 방문이면
                dQ.append(next)
                ch[next]=1 # 잠금
                dis[next]=dis[now]+1 #거리(레벨)
print(dis[m])