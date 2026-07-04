import sys
from collections import deque

sys.stdin = open("input.txt", "rt")

n,m=map(int,input().split())
Q=[(pos,val) for pos,val in enumerate(list(map(int,input().split())))]
# ex) 60 50 70 ->[(0,60),(1,50),(2,70)]

Q=deque(Q)
cnt=0

while True:
    cur=Q.popleft()
    if any(cur[1]<x[1] for x in Q) :
    #cur의 val값이 Q에 있는 x들의 val 값보다 하나라도 작을 때
        Q.append(cur)
    else :
        cnt+=1
        if cur[0]==m :
            print(cnt)
            break

