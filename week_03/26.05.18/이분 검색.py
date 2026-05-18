import sys

# sys.stdin = open("input.txt", "rt")

# 이분 검색 (lt, rt, mid)
# mid=(lt+rt)//2
# 정렬되있는 상황에서 사용

N,M=map(int,input().split())
a=list(map(int,input().split()))
a.sort()

lt=0
rt=N-1
while lt<=rt :
    mid=(lt+rt)//2
    if a[mid]==M :
        print(mid+1)
        break
    elif a[mid]>M :
        rt=mid-1
    else :
        lt=mid+1

