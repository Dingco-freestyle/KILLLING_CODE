import sys
sys.stdin=open("input.txt")
def change(a,b,color,d) :
    global flag
    na=a+dx[d]
    nb=b+dy[d]
    if na<0 or nb<0 or na>=n or nb>=n :
        return
    if pan[na][nb]==color :
        flag=True
        return
    if pan[na][nb]!=0 and pan[na][nb]!=color :
        willchange.append((na,nb))
        change(na,nb,color,d)

if __name__=="__main__" :
    t=int(input())
    dx = [0, 0, 1, 1, -1, -1, 1, -1]
    dy = [1, -1, 0, -1, 0, 1, 1, -1]
    for tc in range(1,t+1) :
        black,white=0,0
        n,m=map(int,input().split())
        pan=[[0 for _ in range(n)] for i in range(n)]
        pan[n//2-1][n//2-1]=1
        pan[n//2][n//2-1]=1
        pan[n//2-1][n//2]=1
        pan[n//2][n//2]=2

        for i in range(m) :
            y,x,color=map(int,input().split())
            pan[x-1][y-1]=color

            for j in range(8) :
                flag=False
                willchange=[]
                change(x-1,y-1,color,j)
                if flag==True :
                    for t in willchange :
                        pan[t[0]][t[1]]=color
        for i in range(n) :
            for j in range(n) :
                if pan[i][j]==1 :
                    black+=1
                elif pan[i][j]==2 :
                    white+=1
        print(f"#{tc} {black} {white}")