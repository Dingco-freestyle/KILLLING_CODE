import sys


# sys.stdin = open("input.txt", "rt")

n=int(input())
p=dict() # dict() : key값을 정수가 아닌 문자로 둘 수 있음

for i in range(n) :
    word=input()
    p[word]=1

for i in range(n-1) :
    word=input()
    p[word]=0

for key, val in p.items() : #dict p의 key와 val를 출력 가능
    if val==1 :
        print(key)
        break

