import sys

# sys.stdin = open("input.txt", "rt")
input=sys.stdin.readline # 입력속도 빨라짐
# s=input().rstrip(); # 문자열을 읽을때는 이렇게(\n 날려줌)
def DFS(L,S,sum) :
    global cnt

    if L==k :
        if sum%m==0 :
            cnt+=1
    else :
        for i in range(S,n) :
            DFS(L+1,i+1,sum+a[i])
            # 조합 가지뻗기는 S=i+1


if __name__ == '__main__':
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    m=int(input())

    cnt=0
    DFS(0,0,0)
    print(cnt)
