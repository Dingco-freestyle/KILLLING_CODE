# import sys
# sys.stdin=open("input.txt","rt")
import heapq
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        tree=[]
        res=[]
        a,b=0,0
        for i in range(n) :
            s=list(map(int,input().split()))
            if s[0]==1 :
                heapq.heappush(tree,-s[1])
            else :
                if tree :
                    res.append(-heapq.heappop(tree))
                    a+=1
                else :
                    b+=1
        print(f"#{tc}",end=" ")
        for i in range(a) :
            print(res[i],end=" ")
        for i in range(b) :
            print(-1,end=" ")
        print()
