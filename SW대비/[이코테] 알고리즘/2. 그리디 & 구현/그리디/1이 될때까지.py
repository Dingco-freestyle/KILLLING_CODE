import sys
sys.stdin = open("input.txt")

if __name__=="__main__" :
    n,k=map(int,input().split())
    res=0
    while True :
        if n==1 :
            break
        if n%k==0 :
            n//=k
        else :
            n-=1
        res+=1
    print(res)