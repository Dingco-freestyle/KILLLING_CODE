# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        n,m=map(int,input().split())
        v=list(map(int,input().split()))
        min=2147000000
        max=-2147000000
        for i in range(n-m+1) :
            k=0
            for j in range(m) :
                k+=v[i+j]
            if min>k :
                min=k
            if max<k :
                max=k
        res=max-min
        print(f"#{tc+1} {res}")