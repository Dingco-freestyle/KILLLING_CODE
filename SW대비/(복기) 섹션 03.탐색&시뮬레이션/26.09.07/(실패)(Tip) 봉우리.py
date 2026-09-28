import sys
# sys.stdin=open("input.txt","rt")
# Tip 1. 각 행 열에 리스트 [0] 채우는 방법
# Tip 2. all() 함수 사용 ( all() : () 안에 모든게 참이면 True)
if __name__=="__main__" :
    n=int(input())
    board=[list(map(int,input().split())) for _ in range(n)]
    board.append([0]*n)
    board.insert(0,[0]*n)
    for x in board :
        x.insert(0,0)
        x.append(0)

    dx=[-1,0,1,0]
    dy=[0,1,0,-1]

    res=0
    for i in range(1,n+1) :
        for j in range(1,n+1) :
            m=board[i][j]

            if all(m>board[i+dx[k]][j+dy[k]] for k in range(4)) :
                res+=1
    print(res)