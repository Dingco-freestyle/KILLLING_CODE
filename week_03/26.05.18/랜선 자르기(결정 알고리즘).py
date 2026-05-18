import sys

# sys.stdin = open("input.txt", "rt")

# 이분 검색
# << 결정 알고리즘에서 자주 사용
# (찾고자 하는 답이 특정 범위 안에 있을 때)

def Count(len) :
    cnt=0
    for x in Line :
        cnt+=(x//len)

    return cnt # 랜선 갯수

K,N=map(int,input().split())
Line=[]
res=0
largest=0

for i in range(K) :
    tmp=int(input())
    Line.append(tmp)
    largest=max(largest,tmp) # 둘 중에 큰값을 갱신

lt=1
rt=largest
while lt<=rt :
    mid=(lt+rt)//2 # mid=랜선의 길이
    if Count(mid)>=N :
        res=mid
        lt=mid+1

    else : # 길이가 너무 길 때
        rt=mid-1
    
print(res)


