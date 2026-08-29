import sys
sys.stdin=open("input.txt","rt")

arr=[x for x in range(1,21)]
arr.insert(0,0)


for i in range(10) :
    a,b=map(int,input().split())
    arr[a:b+1]=arr[b:a-1:-1]

for i in range(1,21) :
    print(arr[i], end=" ")