import sys
sys.stdin = open("input.txt")
# 투포인터 사용
if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        n=int(input())
        board=[list(map(int,input())) for _ in range(n)]
        lt=n//2
        rt=n//2+1
        res=0
        for i in range(n) :
            res += sum(board[i][lt:rt])
            if i<n//2 :
                lt-=1
                rt+=1
            else :
                lt+=1
                rt-=1
        print(f"#{tc+1} {res}")



# if __name__=="__main__" :
#     t=int(input())
#     for tc in range(t) :
#         n=int(input())
#         board=[list(map(int,input())) for _ in range(n)]
#         s,e=n//2,n//2
#         m=n//2+1
#         res=0
#         for i in range(m) :
#             for j in range(i,n-i) :
#                 res+=board[s][j]
#                 res+=board[e][j]
#             s-=1
#             e+=1
#         for i in range(n) :
#             res-=board[n//2][i]
#         print(f"#{tc+1} {res}")
