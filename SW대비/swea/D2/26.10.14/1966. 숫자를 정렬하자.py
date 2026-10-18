# import sys
# sys.stdin = open("input.txt")
if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        n=int(input())
        arr=list(map(int,input().split()))
        arr.sort()
        print(f"#{tc+1}",end=" ")
        print(*arr)