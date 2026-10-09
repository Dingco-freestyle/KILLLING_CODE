import sys
# sys.stdin=open("input.txt")
def dfs(L,tot) :
    global cnt
    if tot>t :
        return
    if L==k :
        if tot==t :
            cnt+=1
    else :
        for i in range(coin_n[L]+1) :
            dfs(L+1,tot+coin_p[L]*i)


if __name__=="__main__" :
    t=int(input())
    k=int(input())
    coin_p=[]
    coin_n=[]
    for i in range(k) :
        p,n=map(int,input().split())
        coin_p.append(p)
        coin_n.append(n)

    cnt=0
    dfs(0,0)
    print(cnt)