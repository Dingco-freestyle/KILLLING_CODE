import sys
import heapq as hq #heapq는 항상 최소힙
# ->최대힙은 push, pop 부호만 바꾸면 됌.

# sys.stdin = open("input.txt", "rt")

a=[]

while True :
    n=int(input())

    if n==-1 :
        break
    if n==0 :
        if len(a)==0 :
            print(-1)
        else :
            print(-hq.heappop(a))
    else :
        hq.heappush(a,-n)