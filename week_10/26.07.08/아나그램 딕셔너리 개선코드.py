import sys

# sys.stdin = open("input.txt", "rt")

a=input()
b=input()
sH=dict()

for x in a :
    sH[x]=sH.get(x,0)+1
    # x라는 값이 없으면 0, 있으면 +1
for x in b :
    sH[x]=sH.get(x,0)-1
    # x라는 값이 없으면 0, 있으면 -1 (원상태 복구작업)

for x in a :
    if sH.get(x)>0 : #val값 확인
        print("NO")
        break
else :
    print("YES")
