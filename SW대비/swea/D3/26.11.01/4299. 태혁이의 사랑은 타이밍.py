# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        d,h,m=map(int,input().split())
        a=d-11
        h+=a*24
        b=h-11
        if b<0 :
            res=-1
        else :
            m+=b*60
            c=m-11
            if c<0 :
                res=-1
            else :
                res=c
        print(f"#{tc} {res}")
