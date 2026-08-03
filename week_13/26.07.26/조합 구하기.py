import sys

# sys.stdin = open("input.txt", "rt")
input=sys.stdin.readline # 입력속도 빨라짐
# s=input().rstrip(); # 문자열을 읽을때는 이렇게(\n 날려줌)

def DFS(L,S) :
    global cnt
    if L==m :
        for i in range(L) :
            print(res[i],end=" ")
        cnt+=1
        print()
    else :
        #가지뻗기
        for i in range(S,n+1) :
            res[L]=i
            DFS(L+1,i+1)



if __name__=="__main__":
    n,m=map(int,input().split())
    res=[0]*(n+1)
    cnt=0
    DFS(0,1)
    print(cnt)