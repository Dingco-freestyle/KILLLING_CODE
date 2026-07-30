import sys
# sys.stdin=open("input.txt","rt")


def DFS(L,P) :
    global cnt
    if L==n :
        cnt+=1
        for i in range(P) :
            print(chr(64+res[i]),end="")
        print()
    else :
        for i in range(1, 27):
            if code[L] == i:
                res[P] = i
                DFS(L + 1, P + 1)
            elif i>=10 and code[L]==i//10 and code[L+1]==i%10 :
                res[P] = i
                DFS(L + 2, P + 1)


if __name__=="__main__" :
    code=list(map(int,input()))
    n=len(code)
    code.insert(n,-1) # 마지막에 두자리수 나오면 에러나기 때문에 방지하기위해 마지막인덱스에 -1 추가
    res=[0]*(n+3)
    cnt=0
    DFS(0,0)
    print(cnt)