import sys
# sys.stdin=open("input.txt","rt")
def dfs(L,tot,lt) :
    global res
    if lt > m :
        return
    if L==n :
        if tot>res :
            res=tot
    else :
        dfs(L+1,tot+score[L],lt+time[L])
        dfs(L+1,tot,lt)
if __name__=="__main__" :
    n,m=map(int,input().split())
    score=[]
    time=[]
    for i in range(n) :
        s,t=map(int,input().split())
        score.append(s)
        time.append(t)
    res=0
    dfs(0,0,0)
    print(res)