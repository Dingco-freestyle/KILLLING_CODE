import sys
# sys.stdin=open("input.txt","rt")
from collections import deque

# Tip1. deque() 사용해서 앞 뒤로 제거 가능
if __name__ == "__main__" :
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    a.sort()
    a=deque(a)

    cnt=0
    while a :
        if len(a)==1 :
            cnt+=1
            break
        if a[0]+a[-1]<=m :
            a.pop()
            a.popleft()
            cnt+=1
        else :
            a.pop()
            cnt+=1
    print(cnt)
