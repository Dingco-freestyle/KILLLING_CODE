import sys
# sys.stdin=open("input.txt","rt")
# 원인 1. 튜플 사용
# 원인 2. tmp.clear() : 초기화
# - 꺼낸 원소가 그냥 사라지면 끝 (순서 기록 불필요)	deque
# - 어느 쪽에서 가져왔는지 순서/경로를 기록해야 함	lt, rt
# - 나중에 원래 인덱스가 필요할 수도 있음	lt, rt
# - 큐 형태로 계속 넣었다 뺐다 반복 (BFS 등)	deque

if __name__ == "__main__" :
    n=int(input())
    a=list(map(int,input().split()))
    lt=0
    rt=n-1
    last=0
    res=""
    tmp=[]
    while lt<=rt :
        if a[lt]>last :
            tmp.append((a[lt],"L"))
        if a[rt]>last :
            tmp.append((a[rt],"R"))
        tmp.sort()
        if len(tmp)==0 :
            break
        else :
            res=res+tmp[0][1]
            last=tmp[0][0]
            if tmp[0][1]=="L" :
                lt+=1
            else :
                rt-=1
        tmp.clear()
    print(len(res))
    print(res)