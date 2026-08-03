import sys
# sys.stdin=open("input.txt","rt")
input=sys.stdin.readline

def DFS(L,sum,time) :
    global res
    if time>m:
        return
    if L==n :
        if sum>res :
            res=sum
    else :
        DFS(L+1, sum+v[L],time+t[L]) #문제를 풀 때
        DFS(L+1,sum,time) #문제를 풀지 않을 때

if __name__ == "__main__" :
    n,m=map(int,input().split())
    v=[]
    t=[]
    for i in range(n) :
        a,b=map(int,input().split())
        v.append(a)
        t.append(b)

    res=0
    DFS(0,0,0)
    print(res)