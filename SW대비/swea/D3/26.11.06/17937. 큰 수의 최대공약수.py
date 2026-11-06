# import sys
# sys.stdin=open("input.txt","rt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(1, t + 1):
        a, b = map(int, input().split())
        if a == b:
            res = a
        else:
            res = 1
        print(f"#{tc} {res}")
# # import sys
# # sys.stdin=open("input.txt","rt")
# # from math import gcd
# # 유클리드 호제법
# def gcd(a,b) :
#     while b :
#         a,b=b,a%b
#     return a
# def lcm(a,b) :
#     return a*b//gcd(a,b)
# if __name__=="__main__" :
#     t=int(input())
#     for tc in range(1,t+1) :
#         nums=list(map(int,input().split()))
#         g=nums[0]
#         for x in nums[1:] :
#             if g==1 :
#                 break
#             g=gcd(g,x)
#         print(f"#{tc} {g}")
