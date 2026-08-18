import sys
# sys.stdin = open("input.txt", "rt")

#LIS : Longest Increasing Subsequence(최대 부분 증가 수열)
n = int(input())
arr = list(map(int, input().split()))
arr.insert(0, 0)  # index 0 에 값 0 삽입
dy = [0] * (n + 1)
dy[1] = 1 # 맨앞 arr는 앞에 아무것도 없으므로 1
res = 0

for i in range(2, n + 1):
    max = 0
    for j in range(i - 1, 0, -1):
        if arr[j] < arr[i] and dy[j] > max:
            max = dy[j]
    dy[i] = max + 1
    if dy[i] > res:
        res = dy[i]

print(res)