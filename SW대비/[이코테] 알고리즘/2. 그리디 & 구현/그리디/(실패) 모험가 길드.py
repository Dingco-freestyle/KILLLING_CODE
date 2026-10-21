import sys
sys.stdin = open("input.txt")

if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    res = 0
    arr.sort()
    cnt=0
    for x in arr:
        cnt+=1
        if cnt >= x:
            res += 1
            cnt=0
    print(res)