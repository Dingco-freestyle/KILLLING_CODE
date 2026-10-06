import sys
sys.stdin=open("input.txt","rt")

def dfs(L,sum) :
    if L==n and sum==f :
        for x in p :
            print(x,end=" ")
        sys.exit(0)
    else :
        for i in range(1,n+1) : # 4가지 수열 세우기
            if ch[i]==0 :
                ch[i]=1 # 잠금
                p[L]=i
                dfs(L+1,sum+(p[L]*b[L]))
                ch[i]=0 # dfs후 잠금해제

if __name__=="__main__" :
    n,f=map(int,input().split())
    p=[0]*n
    b=[1]*n # ex) 1 3 3 1
    ch=[0]*(n+1) # 중복 방지 리스트
    for i in range(1,n) :
        b[i]=(b[i-1]*(n-i))//i #이항계수 공식
    dfs(0,0)