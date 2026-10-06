import sys

sys.stdin = open("input.txt", "rt")
# if sum==tot//2 : 이 안되는 이유
# arr가 홀수면 적용안됌

def dfs(L, sum):
    if sum > total // 2:
        return
    if L == n:
        if sum == (total - sum):
            print("YES")
            sys.exit(0)
    else:
        dfs(L + 1, sum + arr[L])
        dfs(L + 1, sum)


if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    total = sum(arr)
    dfs(0, 0)
    print("NO")
