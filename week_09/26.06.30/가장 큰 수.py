# import sys
#
# sys.stdin = open("input.txt", "rt")

# 파이썬은 따로 스택이 없고 리스트를 사용
n,m=map(int,input().split())
n=list(map(int,str(n)))

stack=[]
for x in n :

    while stack and m>0 and stack[-1]<x :
        # top이 x보다 작고 m>0이면 없애줌
        stack.pop()
        m-=1
    stack.append(x)
if m!=0 :
    stack = stack[:-m]

res=''.join(map(str,stack))
print(res)