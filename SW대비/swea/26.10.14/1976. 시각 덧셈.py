# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        h1, m1, h2, m2 = map(int, input().split())

        h = (h1 + h2) % 12
        m = (m1 + m2)
        if m >= 60:
            m = m % 60
            h += 1

        print(f"#{tc + 1} {h} {m}")
