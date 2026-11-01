# import sys
# sys.stdin=open("input.txt","rt")
if __name__ == "__main__" :
    t=int(input())
    for tc in range(t) :
        n,k=map(int,input().split())
        res=[0]*(n+1)
        res[0]=1
        summit=list(map(int,input().split()))
        for i in summit :
            res[i]=1
        print(f"#{tc+1}",end=" ")
        for i in range(len(res)) :
            if res[i]==0 :
                print(i,end=" ")
        print()