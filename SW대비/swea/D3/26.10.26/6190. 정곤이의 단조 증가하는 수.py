# import sys
# sys.stdin=open("input.txt","rt")
def dfs(L,S,gop) :
    if L==2 :
        s=str(gop)
        if len(s)==1 :
            res.append(int(s))
        else :
            x=s[0]
            flag=0
            for i in range(1,len(s)) :
                if x>s[i] :
                    flag=1
                    break
                else :
                    x=s[i]
            if flag==0 :
                res.append(int(s))
    else :
        for i in range(S,len(A)) :
            dfs(L+1,i+1,gop*A[i])


if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        n=int(input())
        A=list(map(int,input().split()))
        res=[]
        dfs(0,0,1)
        res.sort()
        if res :
            print(f"#{tc+1} {res[-1]}")
        else :
            print(f"#{tc+1} {-1}")