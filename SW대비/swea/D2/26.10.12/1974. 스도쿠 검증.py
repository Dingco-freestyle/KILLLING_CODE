# import sys
# sys.stdin = open("input.txt")
if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        board = [list(map(int, input().split())) for _ in range(9)]
        ch1=[0]*10
        ch2=[0]*10
        flag=0
        # 행 열
        for i in range(9):
            ch1 = [0]*10
            ch2 = [0]*10
            for j in range(9):
                if ch1[board[i][j]] == 0 :
                    ch1[board[i][j]]=1

                if ch2[board[j][i]] == 0 :
                    ch2[board[j][i]]=1

            if sum(ch1)!=9 or sum(ch2)!=9 :
                flag=1
                break

        ch3=[0]*10
        for i in range(3) :
            for j in range(3) :
                ch3 = [0] * 10
                for x in range(3) :
                    for y in range(3) :
                        if ch3[board[3*i+x][3*j+y]]==0 :
                            ch3[board[3 * i + x][3 * j + y]]=1
                if sum(ch3)!=9 :
                    flag=1
                    break
        print("#%d" %(tc+1),end=" ")
        if flag==1 :
            print(0)
        else :
            print(1)