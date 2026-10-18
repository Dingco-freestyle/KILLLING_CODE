import sys
sys.stdin = open("input.txt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        n = int(input())
        res = 0
        for i in range(1, n + 1):
            if i % 2 == 0:
                res -= i
            else:
                res += i
        print(f"#{tc + 1}", end=" ")
        print(res)
