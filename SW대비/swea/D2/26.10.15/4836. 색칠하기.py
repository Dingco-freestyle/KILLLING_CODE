# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        n=int(input())
        board=[[0]*10 for _ in range(10)]
        for i in range(n) :
            x1,y1,x2,y2,c=map(int,input().split())
            for j in range(y1,y2+1) :
                for k in range(x1,x2+1) :
                    board[j][k]+=1
        cnt=0
        for i in range(10) :
            for j in range(10) :
                if board[i][j]==2 :
                    cnt+=1
        print(f"#{tc+1} {cnt}")