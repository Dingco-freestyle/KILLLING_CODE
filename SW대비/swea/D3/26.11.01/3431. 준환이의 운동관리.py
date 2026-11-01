# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        L,U,X=map(int,input().split())
        res=0
        if X<L :
            res=L-X
        elif L<=X<=U :
            res=0
        else :
            res=-1
        print(f"#{tc} {res}")