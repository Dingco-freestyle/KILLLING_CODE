import sys
# sys.stdin=open("input.txt","rt")
def dfs(L,S) :
    global cnt
    if L==m :
        cnt+=1
        for x in res :
            print(x,end=" ")
        print()
    else :
        for i in range(S,n+1) : # 가지수(s부터 시작해서 중복가지수 제거)
            res[L]=i
            dfs(L+1,i+1) # s가 가지+1

if __name__=="__main__" :
    n,m=map(int,input().split())
    res=[0]*m
    cnt=0
    dfs(0,1)
    print(cnt)