# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        a,b,c=map(int,input().split())
        if a==b :
            res=c
        elif a==c :
            res=b
        elif b==c :
            res=a
        print(f"#{tc} {res}")