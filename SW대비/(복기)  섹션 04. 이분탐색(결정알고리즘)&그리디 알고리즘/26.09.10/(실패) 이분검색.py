import sys
sys.stdin=open("input.txt","rt")
# 이분 검색 (lt, rt, mid)
# mid=(lt+rt)//2
# 정렬되있는 상황에서 사용
if __name__ =="__main__" :
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    a.sort()

    lt=0
    rt=n-1
    while lt<=rt :
        mid=(lt+rt)//2
        if a[mid]==m :
            print(mid+1)
            break
        elif a[mid]>m :
            rt=mid-1
        else :
            lt=mid+1