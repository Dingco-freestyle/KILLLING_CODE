# import sys
# sys.stdin=open("input.txt","rt")
def dfs(L,tmp) :
    global res
    if L==n :
        ap=[0 for _ in range(26)]
        for x in tmp :
            if 'a'<=x<='z' :
                ap[ord(x)-ord('a')]=1

        if sum(ap)>=26 :
            res+=1
    else :
        dfs(L+1,tmp+word[L])
        dfs(L+1,tmp)
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        word=[]
        for i in range(n) :
            s=input()
            word.append(s)
        res=0
        tmp=""
        dfs(0,tmp)
        print(f"#{tc} {res}")