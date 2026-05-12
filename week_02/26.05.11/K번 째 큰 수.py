import sys
# sys.stdin=open("input.txt","rt")

N,K=map(int,input().split())
a=list(map(int,input().split()))
res=set() # 중복 제거 set 자료구조


for i in range(N):
    for j in range(i+1, N):
        for s in range(j+1, N):
            res.add(a[i]+a[j]+a[s])
            # set 자료구조는 append(x), add(o)

res=list(res) # set은 sort(x). list화 시켜주고 sort()
res.sort(reverse=True)
print(res[K-1])