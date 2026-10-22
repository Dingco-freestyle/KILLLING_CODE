import sys
sys.stdin = open("input.txt")
from bisect import bisect_left,bisect_right
if __name__ == "__main__":
    n,m=map(int,input().split())
    arr=list(map(int,input().split()))
    lt=bisect_left(arr,m)
    rt=bisect_right(arr,m)
    print(rt-lt)
# def dfs(lt,rt) :
#     global res
#     mid=(lt+rt)//2
#     if lt<=rt :
#         if arr[mid]==m :
#             res+=1
#             dfs(mid+1,rt)
#             dfs(lt,mid-1)
#         elif arr[mid]<m :
#             dfs(mid+1,rt)
#         else :
#             dfs(lt,mid-1)
#     else :
#         return
#
# if __name__ == "__main__":
#     n,m=map(int,input().split())
#     arr=list(map(int,input().split()))
#     res=0
#     dfs(0,n-1)
#     print(res)