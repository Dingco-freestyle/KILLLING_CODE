import sys
# sys.stdin=open("input.txt","rt")

def DFS(x,sum) :
    global res
    if x>res :
        return
    if sum==m :
        if res>x :
            res=x
    elif sum>m :
        return
    else :
        for i in coin :
            DFS(x+1,sum+i)

if __name__=="__main__" :
    n=int(input())
    coin=list(map(int,input().split()))
    m=int(input())

    coin.sort(reverse=True)
    res=2147000000
    DFS(0,0)
    print(res)