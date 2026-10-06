import sys
sys.stdin=open("input.txt","rt")
if __name__=="__main__" :
    n,m=map(int,input().split())
    arr=[[0]*(n+1) for _ in range(n+1)]
    for i in range(m) :
        s,e,v=map(int,input().split())
        arr[s][e]=v
    for i in range(1,n+1) :
        for j in range(1,n+1) :
            print(arr[i][j],end=" ")
        print()
