import sys

# sys.stdin = open("input.txt", "rt")

def DFS(x,sum, tsum) :
    global max #max 전역변수로 쓰려면 사용
    # 리스트는 선언안하고 사용하면 그냥 전역
    # ex) a=a+[4] << 지역변수 선언. global 사용시 전역
    if sum+(total-tsum)<max : # 현재 sum에 나머지 리스트값 넣어서 미리 확인
        return

    if sum>n :
        return
    if x==c :
        if sum>max :
            max=sum
    else :
        DFS(x+1,sum+a[x],tsum+a[x])
        DFS(x+1,sum,tsum+a[x])

if __name__ == '__main__':
    n,c=map(int,input().split())
    a=[]
    max=0
    for i in range(c) :
        a.append(int(input()))
    total=sum(a)
    DFS(0,0, 0)
    print(max)