import sys
# sys.stdin = open("input.txt", "rt")

# 두 리스트 합치기
# sort()는 퀵정렬로 시간복잡도 = nlogn
# 그러나 이미 두 리스트가 정렬되있으면 시간복잡도 = n 으로 가능
# 두 리스트의 두개의 피벗을 사용하여 피벗을 비교해 작은 값을
# 새 리스트에 삽입
# 리스트 하나를 먼저 다 탐색하면 나머지 리스트의 값을 새 리스트에 이어붙임

N=int(input())
a=list(map(int,input().split()))

M=int(input())
b=list(map(int,input().split()))

c=list()
p1=p2=0

while p1<N and p2<M :

    if a[p1] <= b[p2]:
        c.append(a[p1])
        p1 += 1
    else :
        c.append(b[p1])
        p2 += 1

if p1<N : #나머지 이어붙이기
    c=c+a[p1:]

if p2<M : #나머지 이어붙이기
    c=c+b[p2:]

for i in c :
    print(i,end=" ")