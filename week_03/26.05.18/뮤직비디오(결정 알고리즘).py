import sys

# sys.stdin = open("input.txt", "rt")
def Count(capacity) :
    cnt=1
    sum=0
    for x in Music :
        if sum+x>capacity : #용량 넘어가면 cnt++
            cnt+=1
            sum=x # 다음 DVD 용량 계산
        else :
            sum+=x

    return cnt

N,M=map(int,input().split())
Music=list(map(int,input().split()))
maxx=max(Music)

lt=1
rt=sum(Music) # 최대 용량
res=0

sum=0
while lt<=rt :
    mid=(lt+rt)//2 # 용량 초기화 (최소 용량 찾기 위해)

    if mid>=maxx and Count(mid)<=M :
        res=mid # 일단 정답
        rt=mid-1 # 더 좋은값(최소 용량) 찾기 위해
    else :
        lt=mid+1 # 용량 너무 적어서 키우기

print(res)


