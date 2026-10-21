# import sys
# sys.stdin = open("input.txt")
def check() :
    if tmp==tmp[::-1] :
        return True
    else :
        return False

if __name__ == "__main__":
    for tc in range(1,11) :
        n=int(input())
        board=[list(input()) for _ in range(8)]

        res=0
        for i in range(8) :
            for j in range(8-n+1) :
                tmp=board[i][j:n+j]
                if check() :
                    res+=1
        tmp=""
        for i in range(8) :
            for j in range(8-n+1) :
                tmp=""
                for k in range(n) :
                    tmp+=board[j+k][i]
                if check() :
                    res+=1

        print(f"#{tc} {res}")
