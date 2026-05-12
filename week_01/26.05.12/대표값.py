import sys
# sys.stdin = open("input.txt", "rt")

N = int(input())
a = list(map(int, input().split()))

ave = round(sum(a) / N)  # round : 소수 첫째자리에서 반올림
min = 2147000000


for idx, x in enumerate(a):  # enumerate : idx에는 index 반환, x에는 값 반환
    tmp = abs(x - ave)  # abs 거리

    if tmp < min:
        min = tmp
        score = x
        res = idx + 1

    elif tmp == min:  # 73<->74(ave)<->75
        if x > score: # 75 75 75
            score = x
            res = idx + 1

print(ave, res)