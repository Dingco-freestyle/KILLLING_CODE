# import sys
# sys.stdin=open("input.txt","rt")
def dfs(L) :
    global res
    if L==m :
        return
    else :
        res*=n
        dfs(L+1)
if __name__=="__main__" :
    for tc in range(1,11) :
        t=int(input())
        n,m=map(int,input().split())
        res=1
        dfs(0)
        print(f"#{tc} {res}")