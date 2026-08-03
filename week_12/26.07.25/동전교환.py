import sys

# sys.stdin = open("input.txt", "rt")
input=sys.stdin.readline # 입력속도 빨라짐
# s=input().rstrip(); # 문자열을 읽을때는 이렇게(\n 날려줌)
def DFS(x,sum):
    global res

    if x>res : # 속도 줄이기 x>res 는 볼 필요가 없음
        return
    if sum>m :
        return
    if sum==m :
        if x<res :
            res=x

    else :
        for i in range(n) :
            DFS(x+1,sum+a[i])


if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    m = int(input())

    a.sort(reverse=True)
    res=2147000000

    DFS(0,0)
    print(res)