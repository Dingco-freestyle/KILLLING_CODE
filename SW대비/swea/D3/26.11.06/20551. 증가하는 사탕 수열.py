# import sys
# sys.stdin=open("input.txt","rt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(1, t + 1):
        a, b, c = map(int, input().split())
        count = 0
        while b >= c:
            b -= 1
            count += 1
        while a >= b:
            a -= 1
            count += 1

        if a <= 0 or b <= 0 or c <= 0:
            res = -1
        else:
            res = count
        print(f"#{tc} {res}")