import sys
sys.stdin=open("input.txt","rt")
def solve(n) :
    cells=[]
    for i in range(n) :
        for j in range(n) :
            if board[i][j]=="#" :
                cells.append((i,j))
    r1=min(i for i,_ in cells)
    r2=max(i for i,_ in cells)
    c1=min(j for _,j in cells)
    c2=max(j for _,j in cells)
    h=r2-r1+1
    w=c2-c1+1
    if h==w and h*w==len(cells) :
        return "yes"
    else :
        return "no"

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        board=[list(input()) for _ in range(n)]

        print(f"#{tc} {solve(n)}")
