# import sys
# sys.stdin=open("input.txt","rt")
def init(m) :
    s=""
    if m==0 :
        return "0"
    while m>0 :
        s=str(m%2)+s
        m//=2
    return s

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n,m=map(int,input().split())
        k=init(m)
        if len(k)<n :
            res="OFF"
        else :
            k=k[::-1]
            tot=0
            for i in range(n) :
                tot+=int(k[i])
            if tot==n :
                res="ON"
            else :
                res="OFF"
        print(f"#{tc} {res}")
# 0 15 1 7 1 3 1 1 1 0
