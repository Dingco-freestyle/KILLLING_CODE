import sys

sys.stdin = open("input.txt", "rt")


def dfs(L):
    global cnt
    if L == m:
        for i in range(m):
            print(res[i], end=" ")
        print()
        cnt += 1
    else:
        for i in range(1, n + 1):
            if ch[i] == 0:
                ch[i] = 1 # 잠금 (중복되지않게)
                res[L] = i
                dfs(L + 1)
                # dfs기준 위는 다음 L로 갈때
                # 아래는 back했을때
                ch[i] = 0 # 잠금해제


if __name__ == "__main__":
    n, m = map(int, input().split())
    ch = [0] * (n + 1)
    res = [0] * m
    cnt = 0
    dfs(0)
    print(cnt)