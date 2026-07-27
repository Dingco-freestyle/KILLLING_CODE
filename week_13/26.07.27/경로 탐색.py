import sys
sys.stdin=open("input.txt","rt")
input=sys.stdin.readline

def DFS(v) :
    global cnt

    if v==n :
        cnt+=1
        for x in path : # 경로 출력
            print(x, end=" ")
        print()
    else :
        for i in range(1,n+1) :
            if g[v][i]==1 and ch[i]==0:
                ch[i]=1 # 잠금
                path.append(i)
                DFS(i)

                # back
                path.pop()
                ch[i]=0 # 해제


if __name__=="__main__" :

    n,m=map(int,input().split())

    g=[[0] * (n+1) for row in range(n+1)]
    ch=[0] * (n+1)

    for i in range(m) :
        a,b=map(int,input().split())
        g[a][b]=1

    cnt=0
    path=[]
    path.append(1)
    ch[1]=1
    DFS(1)
    print(cnt)