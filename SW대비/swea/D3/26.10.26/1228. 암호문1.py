# import sys
# sys.stdin=open("input.txt","rt")
from collections import deque
if __name__=="__main__" :
    for tc in range(1,11) :
        n=int(input())
        arr=list(map(int,input().split()))
        m=int(input())

        k=list(input().split())
        Q=deque(k)

        while Q :
            Q.popleft()
            idx=int(Q.popleft())
            count=int(Q.popleft())
            res=deque()
            for i in range(count) :
                res.append(int(Q.popleft()))
            for i in range(idx,idx+count) :
                arr.insert(i,res.popleft())

        print(f"#{tc}",end=" ")
        for i in range(10) :
            print(arr[i],end=" ")
        print()