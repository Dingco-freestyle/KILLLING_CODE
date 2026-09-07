import sys
sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    n=int(input())
    board=[list(map(int,input().split())) for _ in range(n)]

    m=int(input())
    for i in range(m) :
        a,b,c=map(int,input().split())

        if b==0 :
            for j in range(c) :
                tmp=board[a-1].pop(0) # 맨 앞값 pop() 되고 나머지 앞으로 댕겨짐
                board[a-1].append(tmp)
        else :
            for j in range(c) :
                tmp=board[a-1].pop() # 제일 뒤값 pop()
                board[a-1].insert(0,tmp) # 0번 자리에 insert()
    s=0
    e=n
    res=0
    for i in range(n) :
        for j in range(s,e) :
            res+=board[i][j]
        if i<n//2 :
            s+=1
            e-=1
        else :
            s-=1
            e+=1

    print(res)