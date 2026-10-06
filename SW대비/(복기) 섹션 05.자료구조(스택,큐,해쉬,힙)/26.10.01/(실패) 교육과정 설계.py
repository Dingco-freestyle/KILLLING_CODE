import sys
# sys.stdin=open("input.txt","rt")
from collections import deque
if __name__=="__main__" :
    s=input()
    n=int(input())

    for i in range(n) :
        plan=input()
        dq=deque(s)

        for x in plan :
            if x in dq : # x가 dq안에 있을때 순서만 확인
                if x!=dq.popleft() :
                    print("#%d NO" %(i+1))
                    break
        else :
            if len(dq)==0 :
                print("#%d YES" % (i + 1))
            else :
                print("#%d NO" % (i + 1))

