import sys
sys.stdin=open("input.txt","rt")
sys.setrecursionlimit(10**6)
# Top-Down (재귀)
def DFS(x,y) :
    if dy[x][y]>0 : #값을 이미 기록되어 있으면 재사용(메모리제이션)
        return dy[x][y]

    if x==0 and y==0 :
        return arr[0][0]
    else :
        if y==0 :
            dy[x][y]=DFS(x-1,y)+arr[x][y]
        elif x==0 :
            dy[x][y]=DFS(x,y-1)+arr[x][y]
        else :
            dy[x][y]=min(DFS(x-1,y),DFS(x,y-1))+arr[x][y]
        return dy[x][y]
if __name__=="__main__" :

    n=int(input())
    arr=[list(map(int,input().split())) for _ in range(n)]
    dy=[[0]*n for _ in range(n)] #메모리제이션

    print(DFS(n-1,n-1))


# Bottom-Up
# if __name__ == "__main__" :
#     n=int(input())
#     arr=[list(map(int,input().split())) for _ in range(n)]
#     dy=[[0]*n for _ in range(n)]
#
#     dy[0][0]=arr[0][0]
#     tmp=arr[0][0]
#     for i in range(1,n) :
#         dy[0][i]=tmp+arr[0][i]
#         tmp=dy[0][i]
#
#     tmp = arr[0][0]
#     for i in range(1, n):
#         dy[i][0] = tmp + arr[i][0]
#         tmp = dy[i][0]
#
#     for i in range(1,n) :
#         for j in range(1,n) :
#             dy[i][j]=arr[i][j]+min(dy[i-1][j], dy[i][j-1])
#     print(dy[n-1][n-1])
#     # for i in range(n) :
#     #     print(dy[i])

