# import sys
# sys.stdin = open("input.txt")
if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        m1,d1,m2,d2=map(int,input().split())
        days=[0,31,28,31,30,31,30,31,31,30,31,30,31]
        res=0
        if m1==m2 :
            res=d2-d1+1
        else :
            cnt=m2-m1
            for i in range(cnt) :
                x=m1+i
                res+=days[x]
            res+=d2
            res-=d1
            res+=1
        print(f"#{tc+1} {res}")