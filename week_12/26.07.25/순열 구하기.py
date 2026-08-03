import sys

# sys.stdin = open("input.txt", "rt")
input=sys.stdin.readline # 입력속도 빨라짐
# s=input().rstrip(); # 문자열을 읽을때는 이렇게(\n 날려줌)

def DFS(L) :
    global cnt
    if L==m :
        for i in range(m) :
            print(res[i],end=" ")
        cnt+=1
        print()
    else :
        for i in range(1,n+1) :
            if ch[i]==0 : # ch[i]=0일때만 가능 ch[i]=1일때 불가
                ch[i]=1 # 잠금
                res[L]=i
                DFS(L+1)
                ch[i]=0 # 해제

if __name__=="__main__":
    n,m=map(int,input().split())
    res=[0]*m
    ch=[0]*(n+1)
    cnt=0
    DFS(0)
    print(cnt)