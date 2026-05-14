import sys
# sys.stdin = open("input.txt", "rt")

a=list(range(21))

for _ in range(10) :
    s,e=map(int,input().split())

    for i in range((e-s+1)//2) : #횟수 계산
        a[s+i], a[e-i] = a[e-i], a[s+i] #swap

a.pop(0) # index(0) 제거
for x in a :
    print(x,end=" ")