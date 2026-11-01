import sys
sys.stdin=open("input.txt","rt")
from collections import deque
import heapq
# 같은 값이 여러개일수 있으면 번호나 인덱스를 기록.
# 가장 작은 것을 반복해서 꺼내야 한다면 힙 사용!
if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        n,m=map(int,input().split())
        rate=[int(input()) for _ in range(n)]
        weight=[int(input()) for _ in range(m)]

        free=list(range(n))
        spot=[0]*(m+1)
        wait=deque()
        tot=0

        for _ in range(2*m) :
            x=int(input())
            if x>0 :
                if free :
                    spot[x]=heapq.heappop(free)
                else :
                    wait.append(x)
            else :
                c=-x
                s=spot[c]
                tot+=weight[c-1]*rate[s]
                if wait :
                    spot[wait.popleft()]=s
                else :
                    heapq.heappush(free,s)
        print(f"#{tc+1} {tot}")




