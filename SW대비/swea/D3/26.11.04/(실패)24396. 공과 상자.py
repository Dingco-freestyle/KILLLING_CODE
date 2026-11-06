# import sys
# sys.stdin=open("input.txt","rt")
# B박스에 들어가는 W공 k개만 골라 점화식 완성
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        B,W,X,Y,Z=map(int,input().split())
        best=max((B-k)*X+(W-k)*Y+2*k*Z for k in range(min(B,W)+1))
        print(best)
# def dfs(L,Bball,Wball,tot) :
#     global MAX
#     if L==B :
#         Bs=tot
#         Ws=Bball*Z+Wball*Y
#         score=Bs+Ws
#         if score>MAX :
#             MAX=score
#     else :
#         if Bball :
#             dfs(L+1,Bball-1,Wball,tot+X)
#         if Wball :
#             dfs(L+1,Bball,Wball-1,tot+Z)
#
# if __name__=="__main__" :
#     t=int(input())
#     for tc in range(1,t+1) :
#         B,W,X,Y,Z=map(int,input().split())
#         Bball=B
#         Wball=W
#         MAX=-2147000000
#         dfs(0,Bball,Wball,0)
#         print(MAX)
#
#
