import sys
sys.stdin=open("input.txt","rt")

# 내가 푼 풀이 (푸는데 오래걸렸음 90%성공)
# 경로도 출력가능
def dfs(s) :
    global cnt
    if s==n :
        cnt+=1
        # for x in path :
        #     print(x,end=" ")
        # print()
    for i in range(1,n+1) :
        if board[s][i]==1 :
            if ch[i]==0 :
                # path.append(i)
                ch[i]=1
                dfs(i)
                ch[i]=0
                # path.pop()
if __name__=="__main__" :
    n,m=map(int,input().split())
    board=[[0]*(n+1) for _ in range(n+1)]
    ch=[0]*(n+1)
    for i in range(m) :
        s,e=map(int,input().split())
        board[s][e]=1
    cnt=0
    ch[1]=1 # 노드1 방문할거니까 잠금
    # path=[]
    # path.append(1)
    dfs(1)
    print(cnt)
