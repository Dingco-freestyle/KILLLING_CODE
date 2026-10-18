import sys
sys.stdin = open("input.txt")
def tournament(i,j) :
    if i==j :
        return i
    else :
        left=tournament(i,(i+j)//2)
        right=tournament((i+j)//2+1,j)
        return win(left,right)
def win(i,j) :
    if arr[i]==arr[j] :
        return i
    elif arr[i]==1 :
        if arr[j]==2 :
            return j
        else :
            return i
    elif arr[i]==2 :
        if arr[j]==1 :
            return i
        else :
            return j


if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        n=int(input())
        arr=list(map(int,input().split()))
        arr.insert(0,0)
        res=tournament(1,n)
        print(f"#{tc+1} {res}")