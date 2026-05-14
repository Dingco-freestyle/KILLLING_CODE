import sys
sys.stdin = open("input.txt", "rt")

str=input()
res=0
for x in str :
    if x.isdecimal(): #0~9까지의 숫자 확인 함수, isdigit()은 모든 숫자
        res=res*10+int(x)

print(res)
cnt=0
for i in range(1,res+1) :
    if res%i==0:
        cnt+=1
print(cnt)


# 내가 푼거
# tmp=0
# a=0
# for i in range(len(str)) :
#     if str[i]>='0' and str[i]<='9':
#         tmp=int(str[i])
#         a=a*10+tmp
#
# cnt=0
# for i in range(1,a+1) :
#     if a%i==0 :
#         cnt+=1
#
#
# print(a)
# print(cnt)