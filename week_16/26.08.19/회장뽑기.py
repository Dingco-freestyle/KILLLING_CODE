import sys
sys.stdin=open("input.txt","rt")
if __name__ == "__main__" :
    n=int(input())
    dis=[[100]*(n+1) for _ in range(n+1)]

    for i in range(1,n+1) :
        dis[i][i]=0

    while True :
        a,b=map(int,input().split())
        if a==-1 and b==-1 :
            break
        dis[a][b]=1 #무방향 그래프
        dis[b][a]=1

    for k in range(1,n+1) :
        for i in range(1,n+1) :
            for j in range(1,n+1) :
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j])

    res=[0]*(n+1)
    score=100
    for i in range(1,n+1) :
        for j in range(1,n+1) :
            res[i]=max(res[i],dis[i][j]) #각 행의 최대값 저장
        score=min(score,res[i]) #회장 후보 점수 저장

    out=[] # 회장 후보
    for i in range(1,n+1) :
        if res[i]==score :
            out.append(i) # 회장 후보 저장

    print("%d %d" %(score, len(out)))
    for x in out :
        print(x, end=" ")


