import sys
# sys.stdin=open("input.txt","rt")

#원인1. set 자료구조 몰랐음.

n,k=map(int,input().split())
arr=list(map(int,input().split()))
res=set() #
for i in range(n) :
    for j in range(i+1,n) :
        for r in range(j+1,n) :
            res.add(arr[i]+arr[j]+arr[r]) #
res=list(res) #
res.sort(reverse=True)
print(res[k-1])