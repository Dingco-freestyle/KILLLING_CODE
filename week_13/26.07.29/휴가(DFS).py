import sys
sys.stdin=open("input.txt","rt")
input=sys.stdin.readline
def DFS(L,sum) :
    global res

    if L==n+1 :
        if sum>res :
            res=sum
    else :
        if L+t[L]<=n+1 :
            DFS(L+t[L],sum+p[L])
        DFS(L+1,sum)

if __name__=="__main__":

    n=int(input())
    t=[]
    p=[]
    for i in range(n) :
        a,b=map(int,input().split())
        t.append(a)
        p.append(b)

    res=0
    t.insert(0,0) #index를 날짜로 보기 때문에 index 0에 object 0 삽입
    p.insert(0,0) #index를 날짜로 보기 때문에 index 0에 object 0 삽입
    DFS(1,0)
    print(res)