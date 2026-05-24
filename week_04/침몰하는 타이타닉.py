import sys
from collections import deque
# sys.stdin = open("input.txt", "rt")

n,m=map(int,input().split())
a=list(map(int,input().split()))
# 리스트와 데크의 차이점
# 리스트는 맨앞을 pop하면 나머지 값들 앞으로 당겨짐(비효율적)
# 데크는 앞 뒤로 넣고 뺄 수 있고 pop 하면 포인터가 움직임(효율적)
a.sort()
a=deque(a) # 리스트를 데크로 변경

cnt=0
while a : # 리스트 a가 비어있지 않으면 참

    if len(a)==1 :
        cnt+=1
        break

    if a[0]+a[-1] > m : # 자료가 하나면 같은 값을 두번 더함(오류)
        a.pop()
        cnt+=1
    else :
        a.popleft() #데크에선 맨 앞자료 뺄 때 popleft()
        a.pop()
        cnt+=1

print(cnt)