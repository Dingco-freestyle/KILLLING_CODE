import sys

from numpy.ma.core import left_shift
# sys.stdin = open("input.txt", "rt")

N=int(input())

a=[list(map(int,input().split())) for _ in range(N)]
a.append([0]*N) # 리스트 a의 마지막 줄 가장자리 0 추가
a.insert(0,[0]*N) # 리스트 a의 첫번째 줄 가장자리 0 추가

for x in a : # 리스트 a의 왼,오른쪽 줄 가장자리 0 추가
    x.insert(0,0) # 왼
    x.append(0) #오

#상하좌우 비교할때 만들어 놓는 리스트
dx=[-1,0,1,0]
dy=[0,1,0,-1]

res=0

for i in range(1,N+1) :
    for j in range(1,N+1) :
        if all(a[i][j]>a[i+dx[k]][j+dy[k]] for k in range(4)) :
            # all() : () 안에 조건이 모두 참일 때 참
            # k를 상하좌우로 돌림

            res+=1

print(res)