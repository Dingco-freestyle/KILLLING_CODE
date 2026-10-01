import sys
sys.stdin=open("input.txt","rt")
from collections import deque

# 순서대로 처리하거나 같은 값이 여러 번 나오는 데이터 → 튜플 리스트
# 키로 빠르게 조회하거나 개수 세기 같은 용도 → 딕셔너리

# enumerate는 반복 가능한 객체를 순회하면서
# 인덱스(순번)와 값을 함께 꺼내주는 함수

# any(): 반복 가능한 객체의 요소 중 하나라도 True이면 True를
# 돌려주는 내장 함수
if __name__ == "__main__" :
    n,m=map(int,input().split())
    Q=[(pos,val) for pos,val in enumerate(list(map(int,input().split())))]
    Q=deque(Q)

    cnt=0
    while True :
        cur=Q.popleft()

        if any(cur[1]<x[1] for x in Q) :
            Q.append(cur)
        else :
            cnt+=1
            if cur[0]==m :
                print(cnt)
                break