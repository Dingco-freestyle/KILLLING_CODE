# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        a,b=map(int,input().split())
        res=0
        if (a+b)>=24 :
            res=(a+b)%24
        else :
            res=a+b
        print(f"#{tc} {res}")