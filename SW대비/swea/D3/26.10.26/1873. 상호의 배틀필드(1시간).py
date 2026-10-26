# import sys
# sys.stdin=open("input.txt","rt")
def shot(k,x,y) :
    xx=x+dx[k]
    yy=y+dy[k]
    if 0<=xx<h and 0<=yy<w and (board[xx][yy]=='.' or board[xx][yy]=='-') :
        shot(k,xx,yy)
    elif 0<=xx<h and 0<=yy<w and board[xx][yy]=='*' :
        board[xx][yy]='.'

def work(idx) :
    global s,e
    board[s][e]=dict[idx]
    xx=s+dx[idx]
    yy=e+dy[idx]
    if 0<=xx<h and 0<=yy<w and board[xx][yy]=="." and board[xx][yy]!='-' :
        board[xx][yy]=dict[idx]
        board[s][e]='.'
        s=xx
        e=yy

if __name__=="__main__" :
    t=int(input())
    dx=[1,0,-1,0] #D L U R
    dy=[0,-1,0,1]
    dict=['v','<','^','>']
    for tc in range(t) :
        h,w=map(int,input().split())
        board=[[0]*w for _ in range(h)]
        for i in range(h) :
            ss=list(input())
            board[i]=ss



        n=int(input())
        R=input()
        for i in range(h) :
            for j in range(w) :
                if board[i][j]=="<" or board[i][j]=="^" or board[i][j]=="v" or board[i][j]==">" :
                    s,e=i,j
                    break
        for i in R :
            if i=='U' :
                work(2)
            elif i=='L' :
                work(1)
            elif i=='D' :
                work(0)
            elif i=='R' :
                work(3)
            elif i=='S' :
                if board[s][e] == '^':
                    k = 2
                elif board[s][e] == '<':
                    k = 1
                elif board[s][e] == 'v':
                    k = 0
                elif board[s][e] == '>':
                    k = 3
                shot(k,s,e)

        print(f"#{tc+1}",end=" ")
        for i in range(h) :
            for j in range(w) :
                print(board[i][j],end="")
            print()
