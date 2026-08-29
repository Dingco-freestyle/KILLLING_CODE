import sys
# sys.stdin=open("input.txt","rt")
# Tip1. 두 리스트를 합칠 때 이미 두 리스트가 정렬되어있다면
#       병합하는것이 o(n)이므로 더 빠름

n=int(input())
arr1=list(map(int,input().split()))
m=int(input())
arr2=list(map(int,input().split()))
arr3=[]
p1,p2=0,0

while p1<n and p2<m :
    if arr1[p1]<=arr2[p2] :
        arr3.append(arr1[p1])
        p1+=1
    else :
        arr3.append(arr2[p2])
        p2+=1
if p1<n :
    arr3+=arr1[p1:]
else :
    arr3+=arr2[p2:]

for i in arr3 :
    print(i,end=" ")

# sort() 사용
# arr3=arr1+arr2
# arr3.sort()
# for i in arr3 :
#     print(i,end=" ")