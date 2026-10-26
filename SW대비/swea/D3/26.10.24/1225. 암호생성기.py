# import sys
# sys.stdin=open("input.txt","rt")
from collections import deque
if __name__=="__main__" :
    for tc in range(10) :
        n=int(input())
        arr=list(map(int,input().split()))
        Q=deque(arr)
        flag=0
        while True :
            if flag==1 :
                break

            for i in range(1,6) :
                m=Q.popleft()
                if m-i>0 :
                    k=m-i
                    Q.append(k)
                else :
                    k=0
                    Q.append(k)
                    flag=1
                    break

        print(f"#{tc+1}",end=" ")
        for x in Q :
            print(x,end=" ")
        print()