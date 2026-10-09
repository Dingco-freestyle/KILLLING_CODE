import sys
# sys.stdin=open("input.txt","rt")
def dfs(L,tp) :
    global res
    if L==n+1 :
        if tp>res :
            res=tp
    else :
        if L+time[L]<=n+1 :
            dfs(L+time[L],tp+pay[L])
        dfs(L+1,tp)
if __name__=="__main__" :
    n=int(input())
    time=[]
    pay=[]
    for i in range(n) :
        t,p=map(int,input().split())
        time.append(t)
        pay.append(p)
    time.insert(0,0)
    pay.insert(0,0)
    res=0
    dfs(1,0)
    print(res)