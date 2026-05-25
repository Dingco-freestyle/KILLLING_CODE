import sys
from collections import deque
# sys.stdin = open("input.txt", "rt")

n=int(input())
a=list(map(int,input().split()))

lt=0
rt=n-1
last=0
res=""
tmp=[]

while lt<=rt :
    if a[lt]>last :
        tmp.append((a[lt],'L')) # 튜플 형태로 저장
    if a[rt]>last :
        tmp.append((a[rt],'R')) # //

    tmp.sort()
    if len(tmp)==0 : #마지막 값 last 보다 둘 다 작으면
        break
    else :
        res=res+tmp[0][1]
        last=tmp[0][0]
        if tmp[0][1]=='L' :
            lt+=1
        else :
            rt-=1

    tmp.clear()

print(len(res))
print(res)