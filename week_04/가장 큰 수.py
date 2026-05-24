import sys

# sys.stdin = open("input.txt", "rt")

# 스택(LIFO)
# 리스트랑 같음. 그래서 파이썬에서는 리스트로 스택을 사용
# 리스트 pop() : 맨뒤 삭제, append() : 맨뒤 삽입

num,m=map(int,input().split())
num=list(map(int,str(num)))
stack=[]

for x in num :
    while stack and m>0 and stack[-1]<x :
        # stack[-1]<x : 비교값이 맨 위 값보다 클 때
        stack.pop()
        m-=1

    stack.append(x)

if m!=0 : # 제거횟수가 남았을 때는 맨뒤값을 남은 수 만큼 제거
    stack=stack[:-m]

res=''.join(map(str,stack)) # 리스트를 스트링화
print(res)