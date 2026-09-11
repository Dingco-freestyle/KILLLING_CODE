import sys
# sys.stdin=open("input.txt","rt")

# 원인 1. 이분탐색 : 최적의 답을 향해 찾아 나가기


def Count(len) :
    ep=x[0]
    cnt=1
    for i in range(1,n) :
        if x[i]-ep>=len :
            cnt+=1
            ep=x[i]
    return cnt
if __name__=="__main__" :
    n,c=map(int,input().split())
    x=[]
    for i in range(n) :
        a=int(input())
        x.append(a)
    x.sort()

    lt=1
    rt=x[n-1]
    res=0
    while lt<=rt :
        mid=(lt+rt)//2
        if Count(mid)>=c :
            res=mid
            lt=mid+1
        else :
            rt=mid-1
    print(res)