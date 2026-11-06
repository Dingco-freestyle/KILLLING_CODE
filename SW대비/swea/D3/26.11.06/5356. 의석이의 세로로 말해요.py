# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        board=[list(input()) for _ in range(5)]
        maxlen=-2147000000
        for i in range(5) :
            if maxlen<len(board[i]) :
                maxlen=len(board[i])
        for i in range(5) :
            if len(board[i])<maxlen :
                tmp=maxlen-len(board[i])
                for j in range(tmp) :
                    board[i].append("")
        res=""
        for i in range(maxlen) :
            for j in range(5) :
                res+=board[j][i]
        print(f"#{tc} {res}")