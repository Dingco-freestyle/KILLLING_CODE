import sys
# sys.stdin=open("input.txt","rt")

n=int(input())
board=list(list(map(int,input().split())) for _ in range(n))

res=-2147000000
tot=0
for i in range(n) :
    tot=0
    for j in range(n) :
        tot+=board[i][j]
    if res<tot :
        res=tot
tot=0
for i in range(n) :
    tot = 0
    for j in range(n):
        tot += board[j][i]
    if res < tot:
        res = tot
tot=0
i,j=0,0
while True :
    if i==n and j==n :
        break

    tot+=board[i][j]
    i+=1
    j+=1
if tot>res :
    res=tot
tot=0
i,j=0,n-1
while True :
    if i==n and j==-1 :
        break
    tot+=board[i][j]
    i+=1
    j-=1
if tot>res :
    res=tot

print(res)