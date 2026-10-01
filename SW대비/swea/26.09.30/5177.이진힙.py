import sys
sys.stdin=open("input.txt","rt")
def tree(num) :
    global last
    last+=1 # 마지막 위치 한 칸 늘림
    min_heap[last]=num # 맨 끝에 새 값 넣기
    c=last # 현재노드
    p=c//2 # 부모노드
    while p>0 and min_heap[p]>min_heap[c] : #부모가 더 크면
        min_heap[p], min_heap[c]=min_heap[c], min_heap[p]
        # 교환
        c=p # 한 칸 위로 올라감
        p=c//2 # 부모도 한칸 위로 올라감

if __name__=="__main__" :
    t=int(input())
    for i in range(t) :
        n=int(input())
        array=list(map(int,input().split()))

        last=0
        min_heap=[0]*(n+1)

        for a in array:
            tree(a)

        # 조상 노드 합 구하기
        idx=last//2
        total=0
        while idx :
            total+=min_heap[idx]
            idx//=2
        print("#%d %d" %((i+1), total))