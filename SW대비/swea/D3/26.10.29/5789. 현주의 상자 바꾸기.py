# import sys
# sys.stdin=open("input.txt","rt")
# 줄바꿈
# 더빠르게 하려면 뒤에서부터 진행 => 더 작으면 초기화 할 필요 없음
if __name__ == "__main__" :
    t=int(input())
    for tc in range(t) :
        n,q=map(int,input().split())
        box=[0]*(n+1)
        for i in range(1,q+1) :
            l,r=map(int,input().split())
            for j in range(l,r+1) :
                box[j]=i
        print(f"#{tc+1}",end=" ")
        for i in range(1,len(box)) :
            print(box[i],end=" ")
        print()