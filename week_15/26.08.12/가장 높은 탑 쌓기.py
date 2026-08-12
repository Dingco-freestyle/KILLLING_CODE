import sys
# sys.stdin=open("input.txt","rt")

#LIS 응용
n=int(input())
bricks=[]
for i in range(n) :
    a,b,c=map(int,input().split())
    bricks.append((a,b,c)) # 튜플형태로 저장 s,h,w

bricks.sort(reverse=True)
# 첫번째 자료에 의한 내림차순 [(a,b,c)에서 a값. a값이 같다면 b. b값이 같다면 c]
dy=[0]*n
dy[0]=bricks[0][1] # 높이 저장
res=bricks[0][1]

for i in range(1,n) :
    max_h=0
    for j in range(i-1,-1,-1) :
        if bricks[j][2]>bricks[i][2] and dy[j]>max_h :
            max_h=dy[j]
    dy[i]=max_h+bricks[i][1]
    res=max(res,dy[i])
print(res)
