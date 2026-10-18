# import sys
# sys.stdin = open("input.txt")
# 방문 체크만 하는 일반 DFS
# "모든 조합·순열·경로를 따져서 최적을 구하기" → 백트래킹

# 가짓수 정할때 :
# 순서가 결과에 영향을 주는가로 정합니다.
# 순서가 중요하면 매번 여러 개 중에서 고르고(for문),
# 순서가 상관없으면 원소마다 넣을지 말지 2갈래로 나눕니다.
def dfs(idx,kcal,score) :
    global res
    if kcal>L :
        return
    if idx==N :
        if score>res :
            res=score
    else :
        dfs(idx+1,kcal+k[idx],score+t[idx])
        dfs(idx+1,kcal,score)

if __name__ == "__main__":
    T=int(input())
    for tc in range(1,T+1) :
        N,L=map(int,input().split())
        t=[]
        k=[]
        for i in range(N) :
            T,K=map(int,input().split())
            t.append(T)
            k.append(K)
        res=0
        dfs(0,0,0)

        print(f"#{tc} {res}")