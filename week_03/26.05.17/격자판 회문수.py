import sys

# sys.stdin = open("input.txt", "rt")

board=[list(map(int,input().split())) for _ in range(7)]
cnt = 0


for i in range(3) : # index 0 1 2 만 보면 5개씩 확인가능
    #행
    for j in range(7) :
        tmp=board[j][i:i+5] # i부터i+5까지 확인 ex) 0~4
        if tmp==tmp[::-1] :
            cnt+=1

        #열 (세로는 슬라이스 불가 (리스트가 아니기 때문))
        for k in range(2) : # 5//2==2
            if board[i+k][j]!=board[i+5-k-1][j] :
                break
        else :
            cnt+=1

print(cnt)