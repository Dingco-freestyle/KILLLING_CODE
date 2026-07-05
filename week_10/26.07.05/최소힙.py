import sys
import heapq as hq #heapq는 항상 최소힙

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
            print(hq.heappop(a)) # 루트노드의 값을 pop()
    else :
        hq.heappush(a,n) #a라는 리스트에 n값을 트리형태로 push



