import sys

# sys.stdin = open("input.txt", "rt")

n=int(input())
a=list(map(int,input().split()))

seq=[0]*n

for i in range(n) :
    for j in range(n) :
        if a[i]==0 and seq[j]==0 :
            # a[i]==0 : 앞에 큰수 다 채움
            # seq[j]==0 : 들어갈 자리 빈자리일때
            seq[j]=i+1
            break

        elif seq[j]==0 :
            a[i]-=1

for x in seq :
    print(x,end=" ")

