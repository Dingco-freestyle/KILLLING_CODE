import sys

# sys.stdin = open("input.txt", "rt")
input=sys.stdin.readline # 입력속도 빨라짐
# s=input().rstrip(); # 문자열을 읽을때는 이렇게(\n 날려줌)

# 이항개수 순열 구하기
def DFS(L,sum) :
    if L==n and sum==f :
        for x in p :
            print(x,end=" ")
        sys.exit(0) # 출력하고 프로그램 전체 종료

    else :
        for i in range(1,n+1) :
            if ch[i]==0 : #중복방지잠금
                ch[i]=1
                p[L]=i
                DFS(L+1,sum+(p[L]*b[L]))
                ch[i]=0


if __name__=="__main__":
    n,f=map(int,input().split())
    p=[0]*n
    b=[1]*n
    ch=[0]*(n+1)
    for i in range(1,n) : # 이항개수 콤비네이션 공식
        b[i]=(b[i-1]*(n-i))//i
    DFS(0,0)
