# import sys
# sys.stdin=open("input.txt","rt")
from collections import deque
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        A=list(map(int,input().split()))
        B=list(map(int,input().split()))
        AQ=deque(A)
        BQ=deque(B)
        ch=[0 for _ in range(n+1)]
        res=[0 for _ in range(n*2)]
        while AQ and BQ :
            while AQ :
                tmpA=AQ.popleft()
                if ch[tmpA]==0 :
                    ch[tmpA]=1
                    res[tmpA]='A'
                    break
            while BQ :
                tmpB=BQ.popleft()
                if ch[tmpB]==0 :
                    ch[tmpB]=1
                    res[tmpB]='B'
                    break

        pp=""
        for x in res :
            if x!=0 :
                pp+=x
        print(pp)