import sys
import itertools as it
sys.stdin = open("input.txt", "rt")
input=sys.stdin.readline # 입력속도 빨라짐
# s=input().rstrip(); # 문자열을 읽을때는 이렇게(\n 날려줌)

n,f=map(int,input().split())
b=[1]*n
for i in range(1,n) :
    b[i]=b[i-1]*(n-i)/i
a=list(range(1,n+1))
cnt=0
for tmp in it.permutations(a): # a의 순열을 모두 구해줌
    sum=0
    for L,x in enumerate(tmp):
        sum+=(x*b[L])
    if sum==f :
        for x in tmp :
            print(x,end=" ")
        break

# 기본은 재귀
# 코테에서 라이브러리 막을 수도 있음
# 조건이 있는 순열은 재귀
