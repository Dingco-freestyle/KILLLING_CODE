import sys

sys.stdin = open("input.txt")
if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        n = int(input())

        ch = [2, 3, 5, 7, 11]
        res = [0] * 5
        for i in range(len(ch)):
            while n % ch[i] == 0:
                res[i] += 1
                n //= ch[i]

        print(f"#{tc + 1}", end=" ")
        print(*res)

# if __name__ == "__main__":
#     t=int(input())
#     for tc in range(t) :
#         n=int(input())
#
#         res=[0]*5
#         while True :
#             if n%2==0 :
#                 n//=2
#                 res[0]+=1
#             elif n%3==0 :
#                 n//=3
#                 res[1]+=1
#             elif n%5==0 :
#                 n//=5
#                 res[2]+=1
#             elif n%7==0 :
#                 n//=7
#                 res[3]+=1
#             elif n%11==0 :
#                 n//=11
#                 res[4]+=1
#             else :
#                 break
#         print(f"#{tc+1}",end=" ")
#         print(*res)