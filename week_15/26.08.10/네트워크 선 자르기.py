import sys
sys.stdin=open("input.txt","rt")
sys.setrecursionlimit(10**6)

# 재귀, 메모이제이션 (Top-Down)
def DFS(len) :
    if dy[len]>0 : # 가지치기 (값이 기록 되어있으면 바로 리턴)(메모리제이션)
        return dy[len]

    if len==1 or len==2 : #1미터, 2미터
        return len
    else :
        dy[len]=DFS(len-1)+DFS(len-2)
        return dy[len]

if __name__ == "__main__" :
    n=int(input())
    dy=[0]*(n+1)
    print(DFS(n))


# # 동적 계획법 (Bottom-Up)
# n=int(input())
# dy=[0]*(n+1)
# dy[1]=1
# dy[2]=2
# for i in range(3,n+1) :
#     dy[i]=dy[i-1]+dy[i-2]
#
# print(dy)