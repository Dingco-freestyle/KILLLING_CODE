# import sys
# sys.stdin = open("input.txt")
from collections import deque
if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        arr=list(map(int,input().split()))
        arr.sort()
        Q=deque(arr)
        Q.popleft()
        Q.pop()
        res=int(sum(Q)/len(Q)+0.5)
        print(f"#{tc+1}",end=" ")
        print(res)