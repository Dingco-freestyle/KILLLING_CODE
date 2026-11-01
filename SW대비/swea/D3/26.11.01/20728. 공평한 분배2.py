# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n,k=map(int,input().split())
        arr=list(map(int,input().split()))
        arr.sort(reverse=True)
        res=2147000000
        for i in range(n-k+1) :
            tmp=[]
            for j in range(k) :
                tmp.append(arr[i+j])
            if (max(tmp)-min(tmp))<res :
                res=max(tmp)-min(tmp)
        print(f"#{tc} {res}")

