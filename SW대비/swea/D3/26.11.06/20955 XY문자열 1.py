# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        s=list(input())
        e=list(input())
        n=len(s)
        res="No"
        while True :
            if len(e)<n :
                break
            if e[-1]=='X' :
                e.pop()
            if e==s :
                res="Yes"
                break
            if len(e)<n :
                break
            if e[-1]=='Y' :
                e.pop()
                e=e[::-1]
            if e==s :
                res="Yes"
                break
        print(f"#{tc} {res}")
