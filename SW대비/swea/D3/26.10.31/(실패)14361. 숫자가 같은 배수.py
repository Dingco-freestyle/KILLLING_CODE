import sys
sys.stdin=open("input.txt","rt")
from itertools import permutations
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        m=n
        arr=list(str(n))
        s=permutations(arr,len(arr))
        flag=0
        for x in s :
            tmp=""
            for k in x :
                tmp+=k
            if int(tmp)%n==0 and int(tmp)!=n :
                print("possible")
                flag=1
                break
        if flag==0 :
            print("impossible")
# def dfs(L,V) :
#     global tmp
#     if tmp :
#         return
#     if L==len(str(n)) :
#         if V%n==0 and V!=n :
#             tmp=1
#         return
#     else :
#         for i in range(len(arr)) :
#             if ch[i]==0 :
#                 ch[i]=1
#                 k=V*10+int(arr[i])
#                 dfs(L+1,k)
#                 ch[i]=0
#                 if tmp :
#                     return
#
# if __name__=="__main__" :
#     t=int(input())
#     for tc in range(1,t+1) :
#         n=int(input())
#         m=n
#         arr=list(str(n))
#         ch=[0]*len(arr)
#
#         tmp=0
#         dfs(0,0)
#         if tmp :
#             res="possible"
#         else :
#             res="impossible"
#         print(f"#{tc} {res}")
