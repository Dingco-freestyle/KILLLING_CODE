import sys
#sys.stdin=open("input.txt","rt")

N,K=map(int,input().split())
n_list=[]

for i in range(1,N+1) :
    if N%i==0 :
        n_list.append(i)


if len(n_list)<K:
    print(-1)
else :
    print(n_list[K-1])
