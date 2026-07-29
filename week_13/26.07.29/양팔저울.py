import sys
# sys.stdin=open("input.txt","rt")
input=sys.stdin.readline

def DFS(L,sum):
    global res

    if L==n :
        if 0<sum<=s :
            res.add(sum) #set 자료구조는 .add()
            # 대칭되는 경우(음수)는 볼 필요 없음
            # ex) <1> (왼)1,5 (오)7
            #     <2> (왼)7 (오)1,5

        return
    else :
        DFS(L+1,sum+G[L])
        DFS(L+1,sum-G[L])
        DFS(L+1,sum)

if __name__=="__main__":

    n=int(input())
    G=list(map(int,input().split()))
    s=sum(G)
    res=set() # 중복 제거
    # ex) <1> (왼) 1
    #     <2> (왼) 7 (오)1, 5
    DFS(0,0)
    print(s-len(res))