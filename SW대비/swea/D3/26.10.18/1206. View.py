# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    for tc in range(10) :
        n=int(input())
        h=list(map(int,input().split()))
        res=0
        for i in range(2,len(h)-2) :
            ch=h[i]
            while True :
                if ch>h[i-1] and ch>h[i-2] and ch>h[i+1] and ch>h[i+2] :
                    res+=1
                else :
                    break
                ch-=1
        print(f"#{tc+1} {res}")