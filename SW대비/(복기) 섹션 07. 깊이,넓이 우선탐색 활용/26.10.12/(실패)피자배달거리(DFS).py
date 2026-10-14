import sys
# sys.stdin=open("input.txt")
def DFS(L,s) :
    global res
    if L==m : # 조합이 완성 됐을때
        sum=0
        for j in range(len(hs)) : #각 집과 m개의 피자집들의 거리 계산
            x1=hs[j][0]
            y1=hs[j][1]
            dis=2147000000
            for x in cb :
                x2=pz[x][0]
                y2=pz[x][1]
                dis=min(dis,abs(x1-x2)+abs(y1-y2))
            sum+=dis
        if sum<res :
            res=sum
    else :
        for i in range(s,len(pz)) : # cb에 m개의 피자집 좌표 저장(조합)
            cb[L]=i
            DFS(L+1,i+1)
if __name__=="__main__" :
    n,m=map(int,input().split())
    board=[list(map(int,input().split())) for _ in range(n)]
    pz=[]
    hs=[]
    cb=[0]*m # 콤비네이션 : 살아남을 피자집들의 좌표
    res=2147000000
    for i in range(n) :
        for j in range(n) :
            if board[i][j]==2 :
                pz.append((i,j))
            elif board[i][j]==1 :
                hs.append((i,j))
    DFS(0,0)
    print(res)