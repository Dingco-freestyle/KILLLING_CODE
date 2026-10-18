# import sys
# sys.stdin = open("input.txt")
def check(s) :
    rs=s[::-1]
    if s==rs :
        return True
    else :
        return False
if __name__ == "__main__":
    t = int(input())
    for tc in range(t) :
        n,m=map(int,input().split())
        board=[list(input()) for _ in range(n)]
        res=""
        result=""
        for i in range(n) :
            for j in range(n-m+1) :
                res=board[i][j:m+j]
                if check(res) :
                    result=res
                    break

        res=""
        for i in range(n) :
            for j in range(n-m+1) :
                res=""
                for k in range(m) :
                    res+=board[j+k][i]

                if check(res) :
                    result=res
                    break


        print(f"#{tc+1}",end=" ")
        for x in result :
            print(x,end="")
        print()