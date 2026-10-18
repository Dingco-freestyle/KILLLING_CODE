import sys
sys.stdin = open("input.txt")
def pre_order(x) :
    global tot
    if x :
        tot+=1
        pre_order(left[x])
        pre_order(right[x])
if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        e,n=map(int,input().split())
        arr=list(map(int,input().split()))
        num=e+1
        left=[0]*(num+1)
        right=[0]*(num+1)

        for i in range(0,e*2,2) :
            if left[arr[i]] :
                right[arr[i]]=arr[i+1]
            else :
                left[arr[i]]=arr[i+1]
        tot=0
        pre_order(n)
        print(f"#{tc+1} {tot}")

