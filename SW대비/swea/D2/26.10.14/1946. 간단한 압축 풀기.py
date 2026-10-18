# import sys
# sys.stdin = open("input.txt")
from collections import deque
if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        n=int(input())
        Q=deque()
        for i in range(n) :
            c,k=input().split()
            k=int(k)
            for j in range(k) :
                Q.append(c)


        print(f"#{tc+1}")
        cnt=0
        while Q :
            if cnt==10 :
                print()
                cnt=0
            print(Q.popleft(),end="")
            cnt+=1
        print()