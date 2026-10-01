import sys
# sys.stdin=open("input.txt","rt")

#26929 실패
def Count(capacity) :
    cnt=1
    sum=0
    for x in a :
        if sum+x > capacity :
            cnt+=1
            sum=x
        else :
            sum+=x
    return cnt

if __name__ =="__main__" :
    n,m=map(int,input().split())
    a=list(map(int,input().split()))

    lt=1
    rt=sum(a) #최대범위
    mmax=max(a)
    res=0
    while lt<=rt :
        mid=(lt+rt)//2
        if mid>=mmax and Count(mid)<=m : #mid>=mmax : 용량은 제일 큰 노래보다 크기가 커야함(논리)
            res=mid
            rt=mid-1
        else :
            lt=mid+1
    print(res)