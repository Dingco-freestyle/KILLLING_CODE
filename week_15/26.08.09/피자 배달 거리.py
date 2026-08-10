import sys
# sys.stdin=open("input.txt","rt")
sys.setrecursionlimit(10**6)
def DFS(L,s) :
    global res

    if L==m : # m개의 피자집 뽑았을 때
        sum=0
        for j in range(len(hs)) : # 각 집의 피자 배달 거리 계산
            x1=hs[j][0]
            y1=hs[j][1]
            dis=2147000000

            for x in cb :
                x2=pz[x][0]
                y2=pz[x][1]
                dis=min(dis,abs(x1-x2)+abs(y1-y2)) #가장 최단거리 피자집
            sum+=dis # 각 집의 최단거리 피자집 합

        if sum<res :
            res=sum

    else :
        for i in range(s,len(pz)) : #조합 경우의 수
            cb[L]=i
            DFS(L+1,i+1)


if __name__ == "__main__" :

    dx=[-1,0,1,0]
    dy=[0,1,0,-1]

    n,m=map(int,input().split())
    board=[list(map(int,input().split())) for _ in range(n)]
    pz=[]
    hs=[]
    cb=[0]*m # 콤비네이션
    res=2147000000

    for i in range(n) :
        for j in range(n) :
            if board[i][j]==1 :
                hs.append((i,j))
            elif board[i][j]==2 :
                pz.append((i,j))

    DFS(0,0)
    print(res) #가장 최단거리 피자집

