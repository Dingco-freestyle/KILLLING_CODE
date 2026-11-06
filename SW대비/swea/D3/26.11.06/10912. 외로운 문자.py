# import sys
# sys.stdin=open("input.txt","rt")
from collections import deque
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        s=list(input())
        s.sort()
        Q=deque(s)
        idx=1
        res=[]
        while Q :
            tmp=Q.popleft()
            if Q :
                if tmp==Q[0] :
                    Q.popleft()
                else :
                    res.append(tmp)
            else :
                res.append(tmp)
        if res :
            pp=''.join(res)
        else :
            pp="Good"
        print(f"#{tc} {pp}")
