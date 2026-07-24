import sys

sys.stdin = open("input.txt", "rt")
input=sys.stdin.readline # 입력속도 빨라짐
# s=input().rstrip(); # 문자열을 읽을때는 이렇게(\n 날려줌)
def DFS(x) :
    global m
    global cnt
    if x==m :
        for i in range(m) :
            print(a[i],end=" ")
        cnt+=1
        print()
    else :
        for i in range(1,n+1) :
            a[x]=i
            DFS(x+1)

if __name__ == "__main__":
    n,m=map(int,input().split())
    a=[0]*m
    cnt=0
    DFS(0)
    print(cnt)