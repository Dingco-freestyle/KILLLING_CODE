# import sys
# sys.stdin = open("input.txt", "rt")
# def dfs(L,S,tot) :
#     if L==3 :
#         res.append(tot)
#     else :
#         for i in range(S,len(arr)) :
#             dfs(L+1,i+1,tot+arr[i])
# if __name__ == "__main__":
#     t=int(input())
#     for tc in range(t) :
#         arr=list(map(int,input().split()))
#         res=[]
#         dfs(0,0,0)
#         res=list(set(res))
#         res.sort(reverse=True)
#         print(f"#{tc+1} {res[4]}")


# # import sys
# # sys.stdin = open("input.txt", "rt")
# from itertools import combinations
# if __name__ == "__main__":
#     t=int(input())
#     for tc in range(t) :
#         res=[]
#         arr=list(map(int,input().split()))
#         tmp=combinations(arr,3)
#         for x in tmp :
#             res.append(sum(x))
#         res=list(set(res))
#         res.sort(reverse=True)
#         print(f"#{tc+1} {res[4]}")
