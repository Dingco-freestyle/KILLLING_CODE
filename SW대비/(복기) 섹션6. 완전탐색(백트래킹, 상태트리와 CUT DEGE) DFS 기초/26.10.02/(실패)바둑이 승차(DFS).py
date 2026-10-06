import sys
# sys.stdin=open("input.txt","rt")
def dfs(L,sum,tsum) :
    global res

    if sum+(total-tsum)<res :
        return
    # 현재 sum에 나머지 리스트값 넣어서 태울 바둑이 미리 확인
    # (total-tsum) : 판단해야 할 남은 바둑이 무게
    # sum : 판단한 바둑이
    # res : 앞에서 확인한 최대값
    if sum>c :
        return
    if L==n :
        if sum>res:
            res=sum
    else :
        dfs(L+1,sum+dog[L],tsum+dog[L])
        dfs(L+1,sum,tsum+dog[L])
if __name__=="__main__" :
    c,n=map(int,input().split())

    dog=[]
    res=0
    for i in range(n) :
        w=int(input())
        dog.append(w)
    total=sum(dog)
    dfs(0,0,0)
    print(res)