import sys
sys.stdin = open("input.txt")
def adjacent(L) :
    for i in range(L) :
        if row[L]==row[i] or abs(row[L]-row[i])==L-i : # 대각선 검사
            return False
    return True

def dfs(L) :
    global result
    if L==n :
        result+=1
    else :
        for i in range(n) :
            row[L]=i
            if adjacent(L) : ## 여기서 체크
                dfs(L+1)
if __name__ == "__main__":
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        row=[0]*n #idx : 행 , value : 열
        result=0

        dfs(0)
        print(f"#{tc} {result}")
