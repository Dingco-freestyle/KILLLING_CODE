import sys
sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n,m=map(int,input().split())

        count=0
        lst=[]
        lstP=[]
        for _ in range(n) :
            s=input()
            if s==s[::-1] :
                lstP.append(s)
            else :
                lst.append(s)
        if len(lstP) :
            count+=m
        for s in lst :
            if s[::-1] in lst :
                count+=m
        print(f"#{tc} {count}")
