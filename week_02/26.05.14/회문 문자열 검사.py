import sys
# sys.stdin = open("input.txt", "rt")
# 직접구현 코드
N=int(input())
for i in range(1,N+1):
    str=input()
    str=str.upper() # 대소문자 구분 안하니까 전부 대문자로 변경
    size=len(str)

    for j in range(size // 2):
        if str[j] != str[-1-j]: # index를 -(마이너스)로 접근 가능
            print("#%d NO" % i)
            areak
    else:
        print("#%d YES" % i)

# 쉬운방법
# import sys
# sys.stdin = open("input.txt", "rt")
#
# N=int(input())
# for i in range(N):
#     str=input()
#     str=str.upper() # 대소문자 구분 안하니까 전부 대문자로 변경
#
#     if str==str[::-1]: # 문자열 거꾸로 하고 비교
#         print("#%d YES" %(i+1))
#     else :
#         print("#%d NO" %(i+1))

