import sys
sys.stdin=open("input.txt","rt")
def pre_order(v) :
    global descendant
    if v:
        # 노드 수 세기
        descendant+=1
        pre_order(left[v])
        pre_order(right[v])

if __name__=="__main__" :
    t=int(input())

    for i in range(t) :
        e,n=map(int,input().split())
        arr=list(map(int,input().split()))
        num=e+1

        left=[0]*(num+1)
        right=[0]*(num+1)
        for j in range(0,2*e,2) :
            if left[arr[j]]==0 : #왼쪽자식 없으면 왼쪽삽입
                left[arr[j]]=arr[j+1]
            else : #왼쪽자식 있으면 오른쪽삽입
                right[arr[j]]=arr[j+1]

        descendant=0
        pre_order(n)
        print("#%d %d" %((i+1), descendant))
