import sys

# sys.stdin = open("input.txt", "rt")

# 스택(LIFO)
# 리스트랑 같음. 그래서 파이썬에서는 리스트로 스택을 사용
# 리스트 pop() : 맨뒤 삭제, append() : 맨뒤 삽입

a=input()
a=list(a)
stack=[]
cnt=0
for i in range(len(a)) :
    if a[i]=="(" :
        stack.append(i)
    else :
        stack.pop()

        if a[i-1]=="(" :
            cnt+=len(stack)
        else :
            cnt+=1

print(cnt)