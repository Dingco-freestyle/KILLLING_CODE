import sys
# sys.stdin=open("input.txt","rt")
# Tip 1. isdecimal() : 10진수 숫자 0~9 이면 True
# Tip 2. 문자열도 for문에 사용가능. 리스트화 안해도됌.

s=input()

res=0
cnt=0
for i in s :
    if i.isdecimal() :
      res=res*10+int(i)

for i in range(1,res+1) :
    if res%i==0 :
        cnt+=1
print(res)
print(cnt)