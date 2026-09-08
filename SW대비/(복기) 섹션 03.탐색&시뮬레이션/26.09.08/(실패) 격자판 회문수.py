import sys
# sys.stdin=open("input.txt","rt")

# 원인1. 행은 슬라이싱 사용
# 원인2. 열 탐색하는 방법 익히기

if __name__=="__main__" :
    board=[list(map(int,input().split())) for _ in range(7)]
    cnt=0

    for i in range(3) :
        #행
        for j in range(7) :
            tmp=board[j][i:i+5]
            if tmp==tmp[::-1] :
                cnt+=1
            #열
            for k in range(2) :
                if board[i+k][j]!=board[i+5-k-1][j] :
                    break
            else :
                cnt+=1
    print(cnt)