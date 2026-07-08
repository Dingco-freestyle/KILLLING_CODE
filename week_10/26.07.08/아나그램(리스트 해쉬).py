import sys

# sys.stdin = open("input.txt", "rt")

a=input()
b=input()

str1=[0]*52 # 대문자 26개, 소문자 26개 총 52개
str2=[0]*52

for x in a :
    if x.isupper(): #대문자 아스키넘버 65~90(26개)
        str1[ord(x)-ord('A')]+=1
    else : # 소문자 아스키넘버 97~122(26개)
        str1[ord(x)-ord('a')+26]+=1
        # index 26부터 저장

for x in b :
    if x.isupper():
        str2[ord(x)-ord('A')]+=1
    else :
        str2[ord(x)-ord('a')+26]+=1

for i in range(52) :
    if str1[i]!=str2[i] :
        print("NO")
        break
else :
    print("YES")