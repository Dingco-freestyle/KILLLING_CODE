import sys

# sys.stdin = open("input.txt", "rt")

def Count(len) :
    cnt=1
    ep=Line[0] # 첫 번째 말의 배치
    for i in range(1,N) :
        if Line[i]-ep>=len : # 거리가 len(mid) 이상이면
            cnt+=1 # 말 배치
            ep=Line[i] # 마지막으로 배치한 말의 위치 갱신

    return cnt


N,C=map(int,input().split())

Line=[]
for _ in range(N) :
    tmp=int(input())
    Line.append(tmp)
Line.sort()
lt=1 # 두 말의 최소거리
rt=Line[N-1] # 두 말의 최대거리

while lt<=rt :
    mid=(lt+rt)//2 #가장 가까운 말의 거리
    if Count(mid)>=C :
        res=mid
        lt=mid+1
    else :
        rt=mid-1

print(res)

