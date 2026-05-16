import sys

from numpy.ma.core import left_shift

# sys.stdin = open("input.txt", "rt")

N=int(input())
a=[list(map(int,input().split())) for _ in range(N)]

M=int(input())
for i in range(M) :
    x,y,z=map(int,input().split())

    if y==0 :
        for _ in range(z) :
            a[x-1].append(a[x-1].pop(0))
            # 맨 앞 값을 pop하면 자동으로 당겨짐. 그리고 맨뒤에넣음
    else :
        for _ in range(z) :
            a[x-1].insert(0,a[x-1].pop())
            # 맨 뒤 값을 꺼내고pop() 맨 앞(0번 인덱스)에 넣음(insert 사용)

# 행렬에서 값 더하기(모래시계 모양)
res=0
s=0 # 시작점
e=N-1 # 끝점
for i in range(N) :
    for j in range(s,e+1) :
        res+=a[i][j]

    if i<N//2 : #중간값 전
        s+=1
        e-=1
    else : # 중간값 후
        s-=1
        e+=1

print(res)
