# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        board=[list(input()) for _ in range(8)]
        flag=0
        res="yes"
        count=0
        for i in range(8) :
            for j in range(8) :
                if board[i][j]=='O' :
                    x,y=i,j
                    count+=1
                    for a in range(8) :
                        if a!=y and board[x][a]=='O' :
                            res="no"
                            flag=1
                            break
                        if a!=x and board[a][y]=='O' :
                            res="no"
                            flag=1
                            break

                    if flag==1 :
                        break
            if flag==1 :
                break
        if count!=8 :
            res="no"
        print(f"#{tc} {res}")
