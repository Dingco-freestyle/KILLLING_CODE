import sys
# sys.stdin=open("input.txt")
def DFS(L,P) :
    global cnt
    if L==n :
        cnt+=1
        for j in range(P) :
            print(chr(64+res[j]),end=" ") #문자 변경
        print()
    else :
        for i in range(1,27) :
            if code[L]==i :
                res[P]=i
                DFS(L+1,P+1)
            elif i>=10 and code[L]==i//10 and code[L+1]==i%10 :
                res[P]=i
                DFS(L+2,P+1)

if __name__=="__main__" :
    code=list(map(int,input()))
    n=len(code)
    code.insert(n,-1) # 마지막에 두자리수 나오면 에러나기 때문에 방지하기위해 마지막인덱스에 -1 추가
    # code[L+1]==i%10를 참/거짓 판단하기 위해 사용
    res=[0]*(n+3) #결과값
    cnt=0
    DFS(0,0)
    print(cnt)