import sys
import itertools as it
sys.stdin = open("input.txt", "rt")
input=sys.stdin.readline # 입력속도 빨라짐
# s=input().rstrip(); # 문자열을 읽을때는 이렇게(\n 날려줌)

n,k=map(int,input().split())
a=list(map(int,input().split()))
m=int(input())
cnt=0
for x in it.combinations(a,k):
    if sum(x)%m==0 :
        cnt+=1

print(cnt)