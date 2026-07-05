import sys

# sys.stdin = open("input.txt", "rt")

a=input()
b=input()
str1=dict()
str2=dict()

for x in a :
    str1[x]=str1.get(x,0)+1
    # x라는 값이 없으면 0, 있으면 +1
for x in b :
    str2[x]=str2.get(x,0)+1

for i in str1.keys() :
    if i in str2.keys() :
        if str1[i]!=str2[i] : #val 비교
            print("NO")
            break
    else :
        print("NO")
        break
else :
    print("YES")