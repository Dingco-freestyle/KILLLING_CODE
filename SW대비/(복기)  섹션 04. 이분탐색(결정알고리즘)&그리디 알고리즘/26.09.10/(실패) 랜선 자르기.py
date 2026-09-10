import sys
# sys.stdin=open("input.txt","rt")
# 이분 검색 (lt, rt, mid)
# mid=(lt+rt)//2
# 원하는 값을 찾을때 사용가능
def Count(len) :
    cnt=0
    for i in a :
        cnt+=(i//len)
    return cnt

if __name__ =="__main__" :
    k,n=map(int,input().split())
    a=[]
    largest=0
    for i in range(k) :
        r=int(input())
        a.append(r)
        largest=max(largest,r)
    lt=1 # lt,rt : 답이 되는 구간
    rt=largest

    # 이분탐색
    while lt<=rt :
        mid=(lt+rt)//2
        if Count(mid)>=n :
            res=mid
            lt=mid+1 # 더 좋은 답이 있는지 확인하기 위해 계속 진행
        else :
            rt=mid-1
    print(res)