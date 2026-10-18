# import sys
# sys.stdin = open("input.txt")
# 최적ㅎ
if __name__ == "__main__":
    for tc in range(1,11) :
        n=int(input())
        h=list(map(int,input().split()))
        for i in range(n) :
            mx=h.index(max(h))
            mn=h.index(min(h))
            if h[mx]-h[mn]<=1 :
                break
            h[mx]-=1
            h[mn]+=1

        print(f"#{tc} {max(h)-min(h)}")