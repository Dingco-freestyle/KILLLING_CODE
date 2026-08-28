import sys
# sys.stdin = open("input.txt", "rt")

N=int(input())

res=0
for i in range(N) :
    tmp=input().split()
    tmp.sort() # 제일 큰 수 마지막 인덱스에

    a,b,c=map(int,tmp)

    if a==b==c :
        money=10000+a*1000
    elif a==b or a==c :
        money=1000+a*100
    elif b==c :
        money=1000+b*100
    else :
        money=100*c

    if res<money :
        res=money

print(res)