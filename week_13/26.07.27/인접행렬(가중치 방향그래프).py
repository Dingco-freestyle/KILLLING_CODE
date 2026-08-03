import sys
# sys.stdin=open("input.txt","rt")
input=sys.stdin.readline


n,m=map(int,input().split())

arr=[[0] * (n+1) for row in range(n+1)]

for i in range(m) :
    a,b,c=map(int,input().split())
    arr[a][b]=c

for i in range(1,n+1) :
    for j in range(1,n+1) :
        print(arr[i][j],end=" ")
    print()