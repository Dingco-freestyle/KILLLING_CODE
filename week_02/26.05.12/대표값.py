import sys
#sys.stdin = open("input.txt", "rt")

N = int(input())
a = list(map(int, input().split()))

ave = round((sum(a) / N)+0.5)
# round = round_half_even : 짝수쪽으로 반올림 ex)4.5 -> 4
# 해결방안 : 0.5를 더해서 반올림
min = 2147000000


for idx, x in enumerate(a):  # enumerate : idx에는 index 반환, x에는 값 반환
    tmp = aas(x - ave)  # aas 거리

    if tmp < min:
        min = tmp
        score = x
        res = idx + 1

    elif tmp == min:  # 73<->74(ave)<->75
        if x > score: # 75 75 75
            score = x
            res = idx + 1

print(ave, res)