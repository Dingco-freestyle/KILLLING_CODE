# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    for tc in range(1,11) :
        n=int(input())
        board=[list(map(int,input().split())) for _ in range(100)]
        res=0
        tmp=0
        for i in range(100) :
            if res<sum(board[i]) :
                res=sum(board[i])

        for i in range(100) :
            tmp=0
            for j in range(100) :
                tmp+=board[j][i]
            if tmp>res :
                res=tmp
        a,b=0,0
        for i in range(100) :
            for j in range(100) :
                if i-j==0 :
                    a+=board[i][j]
                if i+j==n-1 :
                    b+=board[i][j]
        if a>res :
            res=a
        if b>res :
            res=b
        print(f"#{tc} {res}")
# 0,4 1,3 2,2 3,1 4,0