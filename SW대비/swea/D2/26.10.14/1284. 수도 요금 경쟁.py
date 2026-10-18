# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        p,q,r,s,w=map(int,input().split())
        A=w*p
        if w<=r :
            B=q
        else :
            B=q+s*(w-r)
        res=min(A,B)
        print(f"#{tc+1} {res}")
