# import sys
# sys.stdin = open("input.txt")
def dfs(L,tot) :
    global res
    if tot>k :
        return
    if L==n :
        if tot==k :
            res+=1
    else :
        dfs(L+1,tot+A[L])
        dfs(L+1,tot)


if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        n,k=map(int,input().split())
        A=list(map(int,input().split()))
        res=0
        dfs(0,0)
        print(f"#{tc+1} {res}")