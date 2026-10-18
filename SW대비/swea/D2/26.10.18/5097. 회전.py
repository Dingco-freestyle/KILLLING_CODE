# import sys
# sys.stdin = open("input.txt")
from collections import deque
if __name__ == "__main__":
    t = int(input())
    for tc in range(t) :
        n,m=map(int,input().split())
        arr = list(map(int, input().split()))
        Q=deque(arr)
        for i in range(m) :
            x=Q.popleft()
            Q.append(x)
        print(f"#{tc+1} {Q.popleft()}")