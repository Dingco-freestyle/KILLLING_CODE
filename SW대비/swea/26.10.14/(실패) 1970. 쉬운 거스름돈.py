# import sys
# sys.stdin = open("input.txt")
if __name__ == "__main__":
    t=int(input())
    coins=[50000,10000,5000,1000,500,100,50,10]
    for tc in range(t) :
        n=int(input())
        res=[]
        for c in coins :
            res.append(n//c)
            n%=c
        print(f"#{tc+1}")
        print(*res)
