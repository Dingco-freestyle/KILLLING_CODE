# import sys
# sys.stdin=open("input.txt","rt")
from collections import deque
if __name__=="__main__" :
    for tc in range(1,11) :
        n=int(input())
        arr=list(map(int,input().split()))
        m=int(input())
        w=list(input().split())
        Q=deque(w)

        while Q :
            a=Q.popleft()
            if a=='I' :
                idx=int(Q.popleft())
                count=int(Q.popleft())
                for i in range(idx,idx+count) :
                    arr.insert(i,int(Q.popleft()))
            elif a=='D' :
                idx = int(Q.popleft())
                count = int(Q.popleft())
                for i in range(idx,idx+count) :
                    arr.pop(i)
            elif a=='A' :
                idx = int(Q.popleft())
                for i in range(idx) :
                    arr.append(int(Q.popleft()))

        print(f"#{tc}",end=" ")
        for i in range(10) :
            print(arr[i],end=" ")
        print()

