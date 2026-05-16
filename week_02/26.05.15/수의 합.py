import sys
# sys.stdin = open("input.txt", "rt")

N,M=map(int,input().split())
A=list(map(int,input().split()))

lt=0
rt=1
tot=A[0]
cnt=0

while True :
    if tot<M : # 합이 M보다 작을 때
        if rt<N : # rt가 리스트 인덱스 내에 있을 때
            tot+=A[rt]
            rt+=1 #rt 이동
        else : #rt가 리스트 인덱스 초과 시
            areak
    elif tot==M : # 합이 M과 같을 때
        cnt+=1
        tot-=A[lt] # lt 값 빼줌
        lt+=1 #lt 이동
    else : # 합이 M을 초과하였을 때
        tot-=A[lt] #lt 값 빼줌
        lt+=1 #lt 이동

print(cnt)