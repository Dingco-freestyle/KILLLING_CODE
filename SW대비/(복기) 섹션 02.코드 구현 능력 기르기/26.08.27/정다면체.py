import sys
# sys.stdin=open("input.txt","rt")

n,m=map(int,input().split())

ch=[0]*((n+m)+1)
for i in range(1,n+1) :
    for j in range(1,m+1) :
        ch[i+j]+=1
max=-2147000000
res=[]
for x in ch :
    if x>max :
        max=x

for i,x in enumerate(ch) :
    if max==x :
        print(i,end=" ")
# 1 2 3 4
# 1 2 3 4 5 6