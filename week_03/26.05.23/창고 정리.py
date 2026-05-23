import sys

# sys.stdin = open("input.txt", "rt")

L=int(input())
a=list(map(int,input().split()))
M=int(input())

a.sort(reverse=True)

for i in range(M) :
    a[0]-=1
    a[L-1]+=1
    a.sort(reverse=True)

diff=a[0]-a[L-1]
print(diff)