import sys
sys.stdin = open("input.txt")

if __name__ == "__main__":
    x = int(input())
    d=[0]*30001
    for i in range(2,x+1) :
        d[i]=d[i-1]+1
        if i%2==0 :
            d[i]=min(d[i],d[i//2]+1)
        if i%3==0 :
            d[i]=min(d[i],d[i//3]+1)
        if i%5==0 :
            d[i]=min(d[i],d[i//5]+1)
    print(d)
    print(d[x])

# if __name__ == "__main__":
#     n = int(input())
#     res = 0
#     m = 1
#     while True:
#         if m==n :
#             break
#         if (m*5)<n and (m * 5) % 5 == 0:
#             m *= 5
#         elif (m*3)<n and (m*3)%3==0 :
#             m*=3
#         elif (m*2)<n and (m*2)%2==0 :
#             m*=2
#         else :
#             m+=1
#         res+=1
#     print(res)
# # 5 3 2 1
