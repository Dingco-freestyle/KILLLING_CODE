import sys
# sys.stdin=open("input.txt","rt")

# 원인1. 문제 잘 파악하기
# 원인2. 출력방법 익히기
t=int(input())


for i in range(t) :
    n,s,e,k=map(int,input().split())
    arr=list(map(int,input().split()))
    arr=arr[s-1:e]
    arr.sort()
    print("#%d %d" %(i+1, arr[k-1]))
