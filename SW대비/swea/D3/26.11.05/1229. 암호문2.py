# import sys
# sys.stdin=open("input.txt","rt")
from collections import deque
if __name__=="__main__" :
    for tc in range(1,11) :
        n=int(input())
        password=list(map(int,input().split()))
        m=int(input())
        command=list(input().split())
        Q=deque(command)
        while Q :
            tmp=Q.popleft()
            if tmp=="I" :
                x=int(Q.popleft())
                y=int(Q.popleft())
                for i in range(y) :
                    z=int(Q.popleft())
                    password.insert(x+i,z)
            elif tmp=='D' :
                x=int(Q.popleft())
                y=int(Q.popleft())
                for i in range(y) :
                    password.pop(x)

        print(f"#{tc}",end=" ")

        for i in range(10) :
            print(password[i],end=" ")
        print()