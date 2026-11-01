# import sys
# sys.stdin=open("input.txt","rt")
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        res=0
        m=n
        m=m//3
        if m :
            res=m
        else :
            res=0
        print(f"#{tc} {res}")

