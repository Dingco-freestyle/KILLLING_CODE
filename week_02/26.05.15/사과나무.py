import sys
# sys.stdin = open("input.txt", "rt")

N=int(input())
a=[list(map(int,input().split())) for _ in range(N)]

res=0
s=e=N//2
for i in range(N):
    for j in range(s,e+1):
        res+=a[i][j]
    if i<N//2 :
        s-=1
        e+=1
    else :
        s+=1
        e-=1
print(res)