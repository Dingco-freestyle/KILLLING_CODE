# import sys
# sys.stdin=open("input.txt")
if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        n=int(input())
        board=[list(map(int,input().split())) for _ in range(n)]
        res1=[[0]*n for _ in range(n)]
        res2=[[0]*n for _ in range(n)]
        res3=[[0]*n for _ in range(n)]

        for i in range(n) :
            for j in range(n) :
                res1[j][n-1-i]=board[i][j]

        for i in range(n) :
            for j in range(n) :
                res2[n-1-i][n-1-j]=res1[j][n-1-i]

        for i in range(n) :
            for j in range(n) :
                res3[n-1-j][i]=res2[n-1-i][n-1-j]
        print("#%d" %(tc+1))
        for i in range(n) :
            for j in range(n) :
                print(res1[i][j],end="")
            print(end=" ")
            for j in range(n) :
                print(res2[i][j],end="")
            print(end=" ")
            for j in range(n) :
                print(res3[i][j],end="")
            print(end=" ")
            print()