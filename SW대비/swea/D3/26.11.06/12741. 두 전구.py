# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        a,b,c,d=map(int,input().split())
        x=[0 for _ in range(100)]
        y=[0 for _ in range(100)]
        x[a:b]=[1 for _ in range(b-a)]
        y[c:d]=[1 for _ in range(d-c)]
        c=[]
        for i in range(100) :
            if x[i] and y[i] :
                c.append(1)
        print(f"#{tc} {len(c)}")