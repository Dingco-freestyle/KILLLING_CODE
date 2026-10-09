import sys
# sys.stdin=open("input.txt","rt")
# 1)대칭인 경우와 ex) (왼)1,5 (오) 7 : 왼)7 (오) 1,5
# : 대칭값이 무조건 나오므로 양수 하나만 저장
# 2)sum값이 같은경우
# : set() 자료구조로 중복제거
def dfs(L,sum) :
    global res
    if L==n :
        if 0<sum<=s :
            res.add(sum)
    else :
        # 가지수 3개 (왼쪽저울,오른쪽저울,안씀)
        dfs(L+1,sum+G[L]) #(+)추->왼쪽저울
        dfs(L+1,sum-G[L]) #(-)추->오른쪽저울
        dfs(L+1,sum) # 추 안씀

if __name__=="__main__" :
    n=int(input())
    G=list(map(int,input().split()))
    s=sum(G)
    res=set() #중복제거
    dfs(0,0)
    print(s-len(res))