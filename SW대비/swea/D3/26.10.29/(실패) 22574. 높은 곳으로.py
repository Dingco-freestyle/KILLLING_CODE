import sys

sys.stdin = open("input.txt", "rt")
# prefix로 미리 봐서 p층에 가면 hit=True
# 최대값을 공식으로 알기에 풀 수 있음.
if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        n, p = map(int, input().split())
        total = n * (n + 1) // 2
        pref = 0
        hit = False
        for i in range(1, n + 1):
            pref += i
            if pref == p:
                hit = True
                break
            if pref > p:
                break
        print(total - 1 if hit else total)

