import sys
# sys.stdin=open("input.txt","rt")

n=int(input())
arr=list(map(int,input().split()))
arr.insert(0,0)

score=[0]*(len(arr)+1)
for i in range(1,len(arr)) :
    if arr[i]==1 :
        score[i]=score[i-1]+1
print(sum(score))